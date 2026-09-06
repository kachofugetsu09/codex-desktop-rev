# 用 Ghidra 逆向 sky_linux_x64（装着后一条龙）

> 目标：把 official computer use Linux 原生后端 `sky_linux_x64` 反编译成伪代码（C 风格），
> 得到**可读的"源码"**（不止符号表）。它 not-stripped（有完整符号表）但**无 DWARF 调试段**，
> 所以只能反汇编+反编译，不能还原原始 Rust 源码，但伪代码已足够读逻辑。

## 前置

- 装 Ghidra。两种方式：
  - `sudo pacman -S ghidra`（Arch extra，装到 `/usr/share/ghidra/`，`analyzeHeadless` 在 `/usr/share/ghidra/analyzeHeadless`）
  - 或官方 zip：https://github.com/NationalSecurityAgency/ghidra/releases （解压后 `<Ghidra>/support/analyzeHeadless`）
- 需要 Java 21+（你本机已有 `openjdk 21.0.12.1`）

## 一条龙命令

```bash
# locate analyzeHeadless（按安装方式）
ANALYZE=$(command -v analyzeHeadless || echo /usr/share/ghidra/analyzeHeadless)
BIN=/mnt/data/source-code/codex-desktop-rev/native-binaries/bin/sky_linux_x64
OUT=/mnt/data/source-code/codex-desktop-rev/native-binaries/ghidra/decompiled
PROJ=/mnt/data/source-code/codex-desktop-rev/native-binaries/ghidra/proj
mkdir -p "$PROJ" "$OUT"

# 导入 + 自动分析 + 跑导出脚本（首次较慢，数分钟）
"$ANALYZE" "$PROJ" sky_linux -import "$BIN" -scriptPath /mnt/data/source-code/codex-desktop-rev/native-binaries/ghidra -postScript ExportDecomp.java "$OUT"
```

## 输出

- `functions.txt`：所有函数名/地址/大小/签名（符号清单）
- `decomp_*.c`：对名字含 `sky_linux / click / drag / scroll / type_text / press_key / get_screenshot / move / mouse / key / clipboard / x11 / context / run_full_desktop / main` 的每个函数生成反编译伪代码 C 文件

## 手动核查（Ghidra GUI）

- 打开示例（`ghidraRun`）→ Import `sky_linux_x64` → Analyze
- 双击 `sky_linux::main`（字符串 `failed to read stdin` / `failed to parse json` 反查）→ Decompile
- 逐函数重命名 → 读伪代码还原 `Input` enum 分派、X11 事件、截图、点击/拖拽/type_text 逻辑

## 已确认的可反汇编关键函数（地址来自 nm，Ghidra 可精确定位）

| 函数 | 用途 |
|---|---|
| `sky_linux::main` | 入口，读 stdin JSON → 分派 |
| `sky_linux::client::Client::run_full_desktop_command` | 顶层命令分发 |
| `sky_linux::client::args::Args` | CLI 参数解析 |
| `sky_linux::client::x11::full_desktop::client::X11FullDesktopClient` | 核心：截图/点击/拖拽/按键 |
| `sky_linux::client::x11::context::{X11_CONTEXT, send_event_at_position}` | X11 连接与发 X 事件 |
| `sky_linux::client::x11::key_presser::KeyPresser` | 键盘按键合成 |
| `sky_linux::client::x11::paste_text::TemporaryClipboard` | 文本粘贴（Clipboard+Ctrl+v） |
| `sky_linux::client::x11::mouse_overlay::MOUSE_POINTER` | 把鼠标指针画进截图 |
| `sky_linux::client::x11::move_path::move_path` | 鼠标移动路径 |
| `sky_linux::protocol::full_desktop::{screenshot::Screenshot, drag::Input}` | JSON 协议类型 |

## 反编译后再做的事（可选增强）
- 读 `docs/../native-binaries/ANALYSIS-sky_linux_x64.md`（我已整理的协议/模块/CLI）
- 把反编译伪代码补充回 `ANALYSIS-sky_linux_x64.md`，成为完整"源码级"文档
- 想更精确的 Rust 结构：用 `objdump -dS` 对照 / 或装 `rizin`（`pacman -S rizin`）做交互式分析
