# Codex Desktop (Linux) — Computer Use 逆向源码树

本目录是对 **OpenAI 官方 `chatgpt_amd64.deb` (26.901.31953)** 的逆向整理产物。
目标：把"二进制"中**可还原的源码/可读资产**尽可能提取出来，分层存放，**可直接交予其他 agent 继续分析**。

- 来源包：`~/Downloads/chatgpt_amd64.deb`（官方 ChatGPT Desktop for Linux 预览版，Homepage: developers.openai.com/codex/app）
- 解包目录：`/home/huashen/work/chatgpt-deb/`
- 还原方法：`dpkg-deb -x` / `asar extract` + 对可读资产原样保留 + 对原生二进制做反汇编/符号/strings 分析

---

## 目录速览

```
codex-desktop-rev/
├── README.md                     ← 本文件（总入口）
├── computer-use-engine/          ← 官方 Computer Use 引擎（可读源码最多，价值最高）
│   ├── @oai-cua/                 ← @oai/cua v0.2.4：JS 侧 CUA 引擎（getApp/getBrowser，848+ 文件，含 148 个 .d.ts、35 个 .md、273 个 .js）
│   ├── @oai-sky/                 ← @oai/sky v0.6.26：computer 面服务客户端（含 linux/mac/windows target；133 个 .d.ts、6 个 .md、48 个 .js）
│   └── @oai-browser-desktop/     ← @oai/browser-desktop：browser 面运行时（docs 极丰富：accessibility/screenshots/tab/webmcp/confirmations/browser-safety）
├── computer-use-plugin/
│   └── unified-computer-use/     ← 官方 unified-computer-use 插件（全可读：plugin.json/.mcp.json/launch.mjs/banner-*.js/*.md）
├── frontend/
│   ├── computer-use-chunks/      ← 前端 computer use 相关 chunk（minified JS，含 computer-use-settings 等）
│   └── main-bundles/             ← app-primary / app-initial 主 bundle（minified，10MB/8MB）
├── native-binaries/
│   ├── bin/sky_linux_x64         ← 官方 Linux computer use 原生后端（Rust, not stripped）
│   └── ANALYSIS-sky_linux_x64.md ← 逆向报告（协议/模块/CLI/可还原度）
├── docs/                         ← 面向其它 agent 的解读文档（本仓库生成）
├── original-app/                 ← 解包后的原始 app（app.asar 内容，供 grep）
└── meta/                         ← 来源/版本/镜像信息
```

---

## 各层"可还原度"与如何继续

### 1. `computer-use-engine/@oai-cua`（官方 CUA 引擎，**最可读**）
- `package.json` 暴露入口：`dist/lib/js/oai_js_cua/src/index.js`（`cua`）、`tinysky_alt/globals.js`（`setupCUA`）。
- `.d.ts`（148 个，**可读 TypeScript 类型源码**）→ 几乎完整反映 API 签名，是最可靠的"源码骨架"。
- `docs/tinysky-alt-core-cua-repl.md` / `tinysky-alt-core-node-repl.md` → **完整 API 文档**（Target 接口：getAXState/getScreenshot/click/drag/pressKey/scroll/selectText/setValue/typeText/paste）。
- `docs/tinysky-alt-confirmations.md` → **官方 Computer Use Confirmations Policy**（何种动作须用户确认）。
- `docs/tinysky-alt-other-browser-apis.md` → 其它浏览器 API。
- 继续入口：读 `dist/lib/js/oai_js_cua/src/tinysky_alt/create_tinysky_alt.js`（**setupCUA + computer/browser 绑定**）。

### 2. `computer-use-engine/@oai-sky`（computer 面服务客户端）
- `dist/project/cua/sky_js/src/load_options.js`：按 `process.platform` 选 `target`（linux/mac/windows）。
- `dist/project/cua/sky_js/src/create_client.js`：按 target 分发到 `targets/{linux,mac,windows}/create_client.js`。
- `dist/project/cua/sky_js/src/sky.js`：`sky` = 经 `nodeRepl.rpc("sky", …)` 调原生服务；linux 额外暴露 `drag_handle`。
- `targets/linux/create_client.js`：**Linux computer 面方法集合** —— `click, drag, drag_handle, get_screenshot, move, press_key, scroll, type_text`（无 AT-SPI/get_app_state）。
- `dist/project/cua/sky_js/src/service.js`：`handleRpc` 实现 `setup / execute / drag_start-move-end`。
- `.d.ts`（133 个，可读）+ `docs/sky-full-desktop-api.md`（完整 API 蓝本）+ `docs/sky-window-api.md`、`sky-window2-api.md`。
- `bin/linux/sky_linux_x64`：**原生后端二进制**（not stripped，见 native-binaries）。

### 3. `computer-use-engine/@oai-browser-desktop`（browser 面）
- docs 极全：`api.json`、`accessibility.md`、`screenshots.md`、`tab-mentions-iab.md`、`webmcp.md`、`confirmations.md`、`browser-safety.md`、`visibility.md`、`tab-cleanup-chrome.md`、`chrome-troubleshooting.md` 等。
- 这是"浏览器使用"（control browser）端，与"桌面使用"（computer）并列构成 unified computer use。

### 4. `computer-use-plugin/unified-computer-use`（插件，**全可读**）
- `.mcp.json`：MCP server `cua_repl` = `node scripts/launch.mjs`，tools `js`/`js_reset`。
- `scripts/launch.mjs`：spawn `CUA_REPL_NODE_REPL_PATH`，按 surface(browser/computer) 组装 banner + NODE_REPL_TRUSTED_SERVICES。
- `resources/banner-computer.js`（`setupCUA({browser:false, computer:true})`）、`banner-browser.js`、`banner.js`；`computer-description.md`、`browser-description.md`、`js-tool-description.md`、`server-instructions.md`、`js-reset.md`。

### 5. `frontend/`（前端，minified，**不可直接还原 TS**）
- 主 bundle 为 minified rollup 产物，无 sourcemap，无 .d.ts。
- 但可从 `computer-use-chunks/` grep 提取组件名/i18n 文案（如 `computer-use-settings-*.js` 导出 `ComputerUseSettings`）。
- 前端关键逻辑（来自 app-primary 主 bundle）：
  - **@mention 触发**：用户输入 `@AppName` → 生成 `pluginMention` 节点，携带 `computerUseAppMentionPath`；`getMentionedComputerUseApps()` / `getComputerUseAppMentions()` 提取。
  - **批准对话框** `computerUseAppApproval`：文案 "Allow ChatGPT to use {appDisplayName}?"，持久化模式 `always`/`session`，动作 `accept`/deny。
  - **触发提示**：`computerUseAppMentionPath`、`computerUseAvailability`、`isComputerUseAvailable`、`computerUsePlugin`。

### 6. `native-binaries/`（原生后端，**已用 Ghidra 反编译出伪代码源码**）
- `DECOMPILED-ALL-INDEX.md`：**反编译总索引**（4 个二进制 / 165 个 .c）。
- `decompiled/sky_linux_x64/`（27 .c）：computer use Linux 执行层（核心）。
- `decompiled/node_repl_computer_use/`（16 .c）：computer use 与 node_repl 集成层（审批/会话）。
- `decompiled/extension_host/`（50 .c）、`decompiled/tectonic/`（72 .c）。
- `ghidra/DecompileAny.java` + `DecompileFromSymbols.java`：**可复现反编译脚本**。
- `ANALYSIS-sky_linux_x64.md`：模块结构、stdin JSON 协议、CLI、环境变量。
- `bin/sky_linux_x64`、`analyzed/*.symbols.txt`、`strings.txt`。

---

## 一条完整调用链（Computer Use 官方 Linux 实现）

```
用户输入 @App
  → composer 生成 pluginMention(cua app) 节点
  → 前端 computerUseAppApproval 对话框（Always allow / Allow this conversation）
  → 批准后，模型经 @oai/cua 的 `cua.getApp(app)` / `cua.getBrowser(...)` 取 Target
  → cua_repl (MCP server) 执行 JS：node_repl → sky/browser 服务
      ├─ computer 面: nodeRepl.rpc("sky", {type:execute, method:"click", …})
      │       → @oai/sky service.js → target=linux → sky_linux_x64 <cmd> (stdin JSON)
      │       → X11 截图(自绘鼠标指针) + 坐标点击/拖拽/按键/文本
      └─ browser 面: @oai/browser-desktop 控制内置/Chrome 浏览器
  → 状态经 nodeRepl.write(text) / emitImage(screenshot) 回流前端
  → 所有副作用受 Confirmations Policy 约束（删数据/CAPTCHA/敏感传输等须用户确认）
```

## 顶层原生文件（未复制，因体积/非 RE 目标）
`resources/codex`(258MB, Codex CLI)、`resources/codex-code-mode-host`(69MB)、`app.asar`(292MB 完整解包于 original-app)。这些是 app 主体，非 computer use 专项，按需另取。

## 版本信息
- chatgpt deb: 26.901.31953, x86_64
- @oai/cua: 0.2.4  (author: noahj)
- @oai/sky: 0.6.26 (author: noahj)
- Electron: 42.1.0
- Linux 后端: sky_linux crate, `--client x11-full-desktop`, `--timeout-ms 30000`, `--mouse-size-px 12`
