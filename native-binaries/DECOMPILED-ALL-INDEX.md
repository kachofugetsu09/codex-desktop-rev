# native 二进制反编译总索引（Ghidra → 伪代码源码）

> 方法：Ghidra 12.1.2 headless `analyzeHeadless -noanalysis` + `DecompileAny.java`（从 ELF 符号表定位匹配关键词的符号，只反编译自有/目标函数，跳过第三方库）。所有可反编译的官方版 native 二进制均已处理。
> 脚本：`ghidra/DecompileAny.java`（通用，参数：关键词文件 + 输出目录 + 上限函数数）、`ghidra/DecompileFromSymbols.java`。

## 已反编译清单

| 二进制 | 来源路径（官方版内） | 编译 | 符号 | 反编译函数 | 输出目录 | 重要性 |
|---|---|---|---|---|---|---|
| **sky_linux_x64** | `resources/cua_node/lib/node_modules/@oai/sky/bin/linux/` | Rust `sky_linux` | 2907 | **27 个 .c** | `decompiled/sky_linux_x64/` | ★★★ computer use Linux 执行层（截图/点击/按键/拖拽） |
| **node_repl** | `resources/cua_node/bin/node_repl` | Rust `node_repl` | 41280 | **16 个 .c**（computer_use 模块） | `decompiled/node_repl_computer_use/` | ★★★ computer use 与 node_repl 集成层（审批拦截/会话状态） |
| **extension-host** | `resources/plugins/openai-bundled/plugins/chrome/extension-host/linux/x64/` | Rust `extension_host` | 2442 | **50 个 .c** | `decompiled/extension_host/` | ★★ Chrome 扩展宿主（RPC 桥接/Unix socket） |
| **tectonic** | `resources/plugins/openai-bundled/plugins/latex/bin/` | Rust `tectonic` | 53779 | **72 个 .c** | `decompiled/tectonic/` | LaTeX 引擎，与 computer use 无直接关系 |

> 注：某二进制有 N 个 .c 但可能反编译到上限（node_repl 18 匹配全解了；extension-host matched 487 解了 100（上限）；tectonic matched 5262 解了 250（上限））。`functions.txt` 有完整符号地址表。

## 各二进制反编译价值

### 1. sky_linux_x64（computer use Linux 执行层，重点）
- 反编译目录：`decompiled/sky_linux_x64/`
- 关键函数：`X11FullDesktopClient::get_screenshot`(4298行)、`sky_linux::main`(2077行)、`Args::command`(1943行)、`KeyPresser::new`(1389行)、`keys`(1142行)、`Direction/MouseButton` 反序列化。
- 功能：X11 截图（含自绘鼠标指针）、坐标点击/拖拽/按键/文本输入。**computer use 真正"动手"的一环。**
- 详细分析：`ghidra/DECOMPILED-INDEX.md`、`ANALYSIS-sky_linux_x64.md`。

### 2. node_repl（computer use 与 node_repl 集成层）
- 反编译目录：`decompiled/node_repl_computer_use/`
- 关键函数（`node_repl::computer_use::*` 模块）：
  - `ComputerUseElicitationInterceptor::{maybe_auto_answer, on_result}`（**computer use 审批自动应答拦截器**）
  - `computer_use_request_info` / `computer_use_request_infos`（请求信息）
  - `computer_use_state_path` / `read_existing_computer_use_state` / `resolve_computer_use_session_state_path`（会话状态持久化）
  - `auto_computer_use_result`、`table_app_is_listed`、`append/remove_app_from_table`（app 列表管理）、`macos_approvals` 相关
- 功能：computer use 在 node_repl（`cua_repl` MCP 引擎）里的审批拦截、会话状态存取、app 白名单。

### 3. extension-host（Chrome 扩展宿主）
- 反编译目录：`decompiled/extension_host/`
- 关键模块：`extension_host::app_server::{AppServerProcess, TabContextAsset}`、`rpc_router`、`transport::unix::UnixSocketTransport`、`client_writer`、`open_local_file`、`run_with_routing_platform_transport`。
- 功能：浏览器扩展与 app server 的 RPC 桥接宿主（Unix socket + 多客户端路由），涉及 Chrome 扩展与 computer use/browser use 协作。

### 4. tectonic（LaTeX 引擎，非 CU）
- 反编译目录：`decompiled/tectonic/`
- `tectonic` crate 自有符号 694 个，已解 250 个（上限）。仅用于 `plugins/latex` 渲染，与 computer use 无直接关系，作为独立组件提供。

## 不可反编译（stripped，无符号）
- `resources/codex`（247MB，Codex CLI，stripped）
- `resources/codex-code-mode-host`（67MB，stripped）
- `resources/rg`（5.2MB，ripgrep，stripped）
> 这些无 `.symtab` 符号，无法产出有意义反编译。`codex`/`codex-code-mode-host` 仍可通过 `objdump` 反汇编 + 字符串分析（不在本次反编译范围）。

## 完善来源
- 顶层：`/mnt/data/source-code/codex-desktop-rev/`
- 反编译成果：`native-binaries/decompiled/*/`
- 反编译脚本：`native-binaries/ghidra/DecompileAny.java` + `DecompileFromSymbols.java`
- 原生分析：`native-binaries/ANALYSIS-sky_linux_x64.md`
