# sky_linux_x64 反编译成果（Ghidra → 伪代码源码）

> 已完成：用 Ghidra 12.1.2 headless 对 `sky_linux_x64`（native computer use Linux 后端）做了**成功反编译**。
> 输出：`/mnt/data/source-code/codex-desktop-rev/native-binaries/ghidra/decompiled/*.c`
> 方法：`analyzeHeadless -noanalysis` + DecompileFromSymbols.java（用 Ghidra 加载的 ELF 符号表定位，只反编译 `sky_linux` 自身函数，跳过第三方图像库）
> 结果：**matched 35 个符号，成功反编译 28 个函数**

---

## 为什么这样反编译

`sky_linux_x64` 是 `not stripped`（有完整 ELF 符号表），但**无 DWARF 调试段**，且**内嵌庞大的第三方库**（`zune_jpeg`、`image`、`x11rb` 等 JPEG/PNG/X11 库）。
- 若让 Ghidra 全量自动分析，会为几千个第三方库函数反复反编译（每个还要解 Rust 的复杂 pcode），极慢。
- 正确做法：`-noanalysis`（不跑全量分析）+ 脚本按 `sky_linux::*` 符号名定位 → 只反编译**自身** 28 个函数。**数秒完成**。

## 反编译文件清单（关键，按重要性）

| 文件 | 函数（demangled） | 地址 | 行数 | 用途 |
|---|---|---|---|---|
| `decomp_1_X11FullDesktopClient_get_screenshot.c` | `X11FullDesktopClient as FullDesktopComputerUseClient>::get_screenshot` | `0x135210` | 4298 | **核心截图**：X11 XFixes 取鼠标指针、裁剪、缩放、编码 PNG/JPEG |
| `decomp_2_sky_linux_main.c` | `sky_linux::main` | `0x11b7c0` | 2077 | **入口**：读 stdin JSON → 分派命令，配置 `--client/--timeout-ms/--mouse-size-px` |
| `decomp_3_Args_command.c` | `<Args as clap CommandFactory>::command` | `0x118e20` | 1943 | CLI 参数解析（clap） |
| `decomp_4_KeyPresser_new.c` | `sky_linux::client::x11::key_presser::KeyPresser::new` | `0x154a20` | 1389 | 键盘按键合成（X11 事件） |
| `decomp_5_keys.c` | `sky_linux::client::x11::keys::keys` | `0x154f00` | 1142 | 键名 → keysym/键码 映射 |
| `decomp_6_direction_deserialize.c` | `Direction` deserialize 访问器 | `0x13a1c0` | 120 | 滚动方向枚举 JSON 解析 |
| `decomp_6b_mouse_button_deserialize.c` | `MouseButton` deserialize 访问器 | `0x13a380` | 117 | 鼠标键枚举 JSON 解析 |
| 其余 `decomp_*` | `send_event_at_position` / `move_path` / `env_str` / `TemporaryClipboard` / `drop_in_place( * )` | — | — | 事件发送 / 鼠标移动路径 / 环境变量 / 剪贴板 / 各类型析构 |

> 文件名 `decomp_<序>_<名字>.c` 是我重命名的友好名；未重命名的保留 mangled 名（内容头注释有完整签名）。

## JavaScript 侧对应（结合已提取源码看伪代码）

- JS 端 `@oai/sky/targets/linux/sky_linux.js` 以**子命令 + stdin JSON** 调这个二进制（如 `sky_linux_x64 click '{"x":..}'`）。
- 反编译的 `sky_linux::main` 的 stdin 解析逻辑对应 JS 侧 `get_screenshot.js`/`click.js` 等传入的 `Input` enum。
- 协议（`Input`/`Point`/`MouseButton`/`Direction`/`Screenshot`）的 JSON 反序列化在 `decomp_6*` 里可直接对照。

## 反编译局限性（诚实说明）

- Rust 无类型信息时 Ghidra 用 `long *******`、`undefined8`、`param_*` 表示，函数签名不精确。
- Rust 的 async/闭包（`{{closure}}`）与 `drop_in_place` 是样板，意义不大。
- 间接跳转/Rust 虚拟表会触发 `WARNING: Type propagation algorithm not settling` / `Could not follow disassembly flow`，个别块被 Ghidra 裁掉。
- 因此这份是**逻辑级伪代码**，理解「做了什么」够用；要「逐字节精确」需再对照 `objdump` 汇编。

## 相关产物

- 反编译 `.c`：`decompiled/*.c`（28 个）
- 符号地址表：`decompiled/functions.txt`（35 个匹配符号）
- 反汇编（objdump -dC，反混淆）：`../objdump/sky_linux_disasm_demangled.txt`（49 万行，2888 个 `sky_linux::` 标签）
- 原生协议/模块/CLI 分析：`../ANALYSIS-sky_linux_x64.md`

## 为何 sky_linux 是 computer use 的关键执行层
Computer Use 完整链路：前端 @mention → 审批 → 模型经 `@oai/cua`(getApp/getBrowser) → `@oai/sky`(target=linux, RPC) → **`sky_linux_x64`**（本反编译对象，真正操作 X11 屏幕）。`sky_linux` 负责截图（含自绘鼠标指针）+ 坐标点击/拖拽/按键/输入文本，是"电脑使用"在 Linux 上真正动手的一环。
