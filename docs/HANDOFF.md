# 如何 handoff 给其它 agent

本目录是**只读源码资产 + 权威文档**，可直接交给任何 agent 继续分析或集成。拿到本目录时，请按下面路径读。

## 快速上手（按需求选入口）

**A. 只想"看懂 Computer Use 是什么/怎么实现"**
1. `README.md` → 目录速览 + 调用链
2. `docs/frontend-trigger-approval.md` → 前端 @mention 触发 + 审批
3. `docs/cua-main-process-evidence.md` → 主进程 native overlay / IPC
4. `computer-use-engine/@oai-cua/docs/tinysky-alt-confirmations.md` → 安全确认模型

**B. 想"接着写 computer 控制（桌面操作）"**
- `computer-use-engine/@oai-sky/docs/sky-full-desktop-api.md`（完整 API 蓝本）
- `computer-use-engine/@oai-sky/dist/project/cua/sky_js/src/targets/linux/create_client.js`（Linux computer 面方法集）
- `computer-use-engine/@oai-sky/dist/project/cua/sky_js/src/{sky,service,load_options,create_client}.js`
- 落地后端：`native-binaries/ANALYSIS-sky_linux_x64.md`（环境变量/stdin JSON 协议/CLI）

**C. 想"接 CUA 引擎（getApp/getBrowser 高级别 API）"**
- `computer-use-engine/@oai-cua/tinysky_alt/create_tinysky_alt.js`（setupCUA 主逻辑）
- `computer-use-engine/@oai-cua/docs/tinysky-alt-core-cua-repl.md`（Target API）
- `computer-use-engine/@oai-cua/dist/lib/js/oai_js_cua/src/` 下所有 `.d.ts`（可读类型）

**D. 想"接 browser 面（控制浏览器）"**
- `computer-use-engine/@oai-browser-desktop/scripts/browser-client.mjs`（可读 ESM）
- `computer-use-engine/@oai-browser-desktop/docs/api.json` + `docs/*.md`

**E. 想"写前端 computer use UI"**
- `frontend/computer-use-chunks/`（含 computer-use-settings 等）
- `frontend/main-bundles/app-primary-*.js`（@mention/审批逻辑）
- `frontend/avatar-overlay-chunks/`（运行时 overlay / mascot）

## 重要事实（避免误区）
- 官方 Linux computer use 是**视觉/坐标模式**：`sky_linux_x64` 用 **X11**(非 Wayland) 截图 + 坐标点击，**无 AT-SPI 无障碍树**（对比：后端源码无 get_app_state，只有 click/move/drag/scroll/type_text/press_key/get_screenshot）。
- "正在使用电脑 / Esc to cancel" 全屏指示条是 **native overlay**（非 webview JS），由主进程写 `computer-use/config.json`（accent `#339cff`）。
- 前端触发靠 **@mention**（`@App` → `pluginMention` 节点），审批是 **MCP elicitation 对话框**。
- 权限/确认由 `@oai/cua/docs/tinysky-alt-confirmations.md` 统一约束。

## 可还原度速查
| 资产 | 可还原度 |
|---|---|
| `@oai/cua`、`@oai/sky` 的 `.d.ts` | 高（可读类型源码） |
| `@oai/browser-desktop` 的 `.mjs` | 高（可读 ESM） |
| plugin 的 `.md` / `.mjs` / `.json` | 高 |
| `@oai/cua/sky` 的 `.js` | 中（minified，模块边界清晰） |
| 前端主 bundle `*.js` | 低（minified，无 sourcemap，只能 grep 上下文） |
| `sky_linux_x64`（原生 Rust） | 无法还原源码；可用符号表/strings/协议（见 ANALYSIS 文档） |

## 全量原始解包位置（如需 grep 更多）
- 官方 app 解包：`/home/huashen/work/chatgpt-deb/`（rootfs = 完整 app；app = app.asar 解包）
- 前端：`/home/huashen/work/chatgpt-deb/app/webview/assets/`（6955 JS）
