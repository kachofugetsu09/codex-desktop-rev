# sky_linux_x64 — 原生 Computer Use Linux 后端逆向报告

> 来源：官方 `chatgpt_amd64.deb` (26.901.31953) 内的 `resources/cua_node/lib/node_modules/@oai/sky/bin/linux/sky_linux_x64`
> 类型：x86-64 Linux ELF, dynamically linked, **not stripped**
> 语言：Rust（crate 名 `sky_linux`）
> 说明：本文档是"二进制 → 可读信息"的逆向产物。Rust 源码不在包内，但符号表 + 字符串 + CLI 足以还原模块结构、内存布局和 stdin JSON 协议。

---

## 1. 角色（它是什么）

`sky_linux_x64` 是 OpenAI 官方 **Computer Use 的 Linux 原生后端**。上层 JS（`@oai/sky` 的 `sky.js` / `targets/linux/sky_linux.js`）通过子进程调用它，stdin 传 JSON，stdout 返回 JSON。它负责真正操作 X11 桌面：截图、移动鼠标、点击、拖拽、按键、输入文本、滚动。

- 它**只支持 X11**（不是 Wayland）：字符串见 `Active X11 display is required for screenshot and command input`、`Could not connect to X11`、`Set DISPLAY to the active X server`、`Check XAUTHORITY is readable`。
- 使用 X11 库 `x11rb`/`x11rb_protocol`、图像处理 `image`（jpeg/png）、`serde`/`serde_json`、`clap`（CLI 解析）、`xfixes`（鼠标指针截图）、`xdotool` 相关键盘/文本插入。
- 顶层结构：`sky_linux::client`（CLI + 输入分派）、`sky_linux::protocol`（外部协议 JSON schema）、`sky_linux::main`（入口）。

---

## 2. CLI 用法（从 `--help` 得到，权威）

```
Usage: sky_linux_x64 [OPTIONS] <COMMAND>

Commands:
  click           # 来自 stdin JSON 的 Input
  drag
  drag_handle
  get_screenshot
  move
  press_key
  scroll
  type_text
  help

Options:
      --client <CLIENT>                [default: x11-full-desktop] [possible values: x11-full-desktop]
      --timeout-ms <TIMEOUT_MS>        [default: 30000]
      --mouse-size-px <MOUSE_SIZE_PX>  [default: 12]
  -h, --help
```

注意：每个 `<COMMAND>` 自身无参数（`Usage: sky_linux_x64 click` 无 flags），**实际输入走 stdin JSON**。协议见下。

---

## 3. 环境变量

| 变量 | 含义 |
|---|---|
| `OAI_SKY_LINUX_BIN` | JS 侧可覆盖 native 二进制路径（见 `@oai/sky` 的 `sky_linux.js`） |
| `OAI_SKY_LINUX_BACKTRACE` | 崩溃时输出 Rust backtrace |
| `CLIENT_TIMEOUT_MS` | 客户端超时（毫秒） |
| `MOUSE_SIZE_PX` | 鼠标指针在截图里绘制的大小（像素），默认 12 |
| `DISPLAY` / `XAUTHORITY` | X11 连接必需 |

---

## 4. stdin JSON 协议（Input enum）

sky_linux 用 `serde` 的 **internally tagged enum `Input`**，`action` 字段区分命令。字符串反映各变体字段：

- `struct Input`（tag 字段名 `action`；`internally tagged enum Input`）
- `struct Point`（`x`,`y`）
- `struct Input with 1 element`、`2 elements`、`3 elements`、`5 elements`、`6 elements`
- 字段：`x` `y` `mouse_button` `click_count` `direction` `pixels` `start` `move_to` `end`
- `variant identifier`（serde 变体名 = `start`/`move_to`/`end`）

对应命令的输入结构（推断，与 JS 侧 `@oai/sky` 的 linux target 工具参数对齐）：

```
click        : { "action":"click",      x, y, mouse_button?, click_count? }
move         : { "action":"move",       x, y }
drag         : { "action":"drag",       from:[x1,y1], to:[x2,y2] }  // 或 start/move_to/end
drag_handle  : { "action":"drag_handle", start:[x,y], move_to:[x,y], end }  // 分阶段 handle
scroll       : { "action":"scroll",     x?, y?, direction:"up|down|left|right", pixels? }
press_key    : { "action":"press_key",  key:"Ctrl+L" }
type_text    : { "action":"type_text",  text:"..." }
get_screenshot: { "action":"get_screenshot", ... }  // 返回 Screenshot[]
```

`struct Point with 2 elements`、`field index 0 <= i < 2` 说明坐标是 `[x, y]` 数组形式。

---

## 5. 输出（Screenshot）

`get_screenshot` 返回 `Vec<Screenshot>`（`sky_linux::protocol::full_desktop::screenshot::Screenshot`），每项含 `filepath` → 由 JS 侧读文件转 `bytes` + `data_url`（JPEG）。JS 侧：`@oai/sky` 的 `get_screenshot.js` 执行 `sky_linux get_screenshot` → 解析 JSON → 对每项 `from_filepath` + `to_data_url(image/jpeg)`。

---

## 6. 内部 Rust 模块结构（由符号/nm -C 还原）

```
sky_linux
├── main                                   (入口)
├── OAI_SKY_LINUX_BACKTRACE                (环境常量)
└── client
    ├── Client::run_full_desktop_command   (顶层命令分派)
    ├── args::Args                         (clap CLI 参数)
    └── x11
        ├── full_desktop::client::X11FullDesktopClient   (实现 FullDesktopComputerUseClient trait)
        ├── key_presser::KeyPresser                      (按键合成)
        ├── paste_text::TemporaryClipboard               (临时剪贴板 → Ctrl+v 粘贴文本)
        ├── mouse_overlay::MOUSE_POINTER                 (把鼠标指针画进截图的 overlay 位图)
        ├── keys::keys                                   (键名 → keysym 映射)
        ├── context::X11_CONTEXT / send_event_at_position / env_str
        └── move_path::move_path                         (鼠标移动路径)
└── protocol
    ├── direction::Direction               (up/down/left/right)
    ├── mouse_button::MouseButton          (左/右/中)
    └── full_desktop
        ├── screenshot::Screenshot
        ├── drag::Input
        └── full_desktop_computer_use_client::FullDesktopComputerUseClient (trait)
```

从 Rust `.rs` 路径字符串可见的源文件：
- `src/client/x11/full_desktop/drag.rs`
- （余下可从 `_ZN...sky_linux..client..x11..<module>` 符号推断，见 `sky_linux_x64.symbols.txt`）

---

## 7. 机制结论

- **视觉/坐标模式**：Linux 端无 AT-SPI 无障碍树访问，而是 **截图(含自绘鼠标指针) + 相对/绝对坐标** 的纯视觉驱动。
- **鼠标指针 overlay**：`mouse_overlay::MOUSE_POINTER` 在截图上绘制一个 `--mouse-size-px` 大小的指针，模拟"正在用电脑"的视觉反馈；这与前端 `cursor`/占位反馈对应。
- **文本输入**：辅助 `paste_text::TemporaryClipboard`（临时设置剪贴板 + 发 Ctrl+v）比逐键稳定。
- **拖拽**：Linux 提供 `drag_handle`（`drag_start`/`drag_move`/`drag_end`），前端跨 RPC 传 `handle_id`（见 `@oai/sky` 的 `service.js` 与 `sky.js`）。
- **权限面**：无内置权限模型——它直接操作屏幕；**权限/确认完全由上层（`@oai/cua` 的 Computer Use Confirmations Policy + 前端 approval 对话框）把关**。

---

## 8. 可还原度

| 项 | 状态 |
|---|---|
| 二进制 | ✅ 已保存（`bin/sky_linux_x64`，not stripped） |
| 符号表（nm -C） | ✅ `sky_linux_x64.symbols.txt` |
| 字符串表 | ✅ `sky_linux_x64.strings.txt` |
| CLI --help | ✅ 本文档 |
| stdin JSON 协议 | ✅ 本文档（从 serde 字符串还原） |
| Rust 源码 | ❌ 不在包内。符号 + 路径可拼出模块骨架，但完整函数体需反汇编（objdump/Ghidra）。 |

---

## 9. 反编译成果（✅ 已完成，Ghidra 12.1.2）

已用 Ghidra headless 成功将 `sky_linux_x64` **反编译为伪代码源码**（Rust 逻辑级还原）：
- 输出：`ghidra/decompiled/*.c`（28 个函数）
- 索引：`ghidra/DECOMPILED-INDEX.md`（关键函数/地址/行数/用途）
- 方法与脚本：`ghidra/DecompileFromSymbols.java`（`-noanalysis` + 符号表定位，跳过第三方图像库）
- 关键函数：`sky_linux::main`(入口)、`X11FullDesktopClient::get_screenshot`(截图核心)、`KeyPresser`(按键)、`keys`(键映射)、`Args`(CLI)、`Direction/MouseButton`(协议枚举)

至此"二进制 → 源码"已完成：符号表 + strings + objdump 反汇编 + **Ghidra 伪代码**三层俱全。
