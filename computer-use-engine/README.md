# Computer Use Engine 源码导览

这里存放官方 Computer Use 的三个 JS 引擎包：`@oai/cua`、`@oai/sky`、`@oai/browser-desktop`。
它们共同构成"电脑使用（computer）"与"浏览器使用（browser）"的统一运行时，即 `unified-computer-use` 插件的能力来源。

> 通用阅读建议：**先读 `.d.ts`（可读类型源码）理解 API 形状，再对 `.js` 用 grep 定位实现**。
> `.js` 是 rollup 打包的 minified 产物，但模块边界清晰、函数名保留度高。

---

## @oai/cua（v0.2.4，author: noahj）

**角色**：给 node_repl 注入 `cua` 全局对象（`globalThis.cua`），暴露 computer + browser 两套 Target API。

- 入口（package.json `main`/`exports`）：
  - `dist/lib/js/oai_js_cua/src/index.js` → 导出 `cua`（自定义）
  - `dist/lib/js/oai_js_cua/src/tinysky_alt/globals.js` → 导出 `setupCUA`（banner 调用）
- 核心文件（`dist/lib/js/oai_js_cua/src/`）：
  - `tinysky_alt/create_tinysky_alt.js`：**setupCUA 主逻辑** —— 依 `browser`/`computer` 开关加载 browser-client / sky；挂 `globalThis.cua`、`globalThis.agent`。
  - `tinysky_alt/globals.js`：`Reflect.set(globalThis,"cua",l)`，setupCUA=init 入口。
  - `tinysky_alt/get_state.js`：状态汇总（browsers + computer）。
  - `tinysky_alt/documentation.js`：读文档注入。
  - `tinysky_alt/types.d.ts`：API 类型。
  - `index.js`/`cua.js`：`cua = {computer, browsers, initialize, getState}`；`cua.computer = sky`、`cua.browsers = setupBrowserRuntime(...)`。
- API（`docs/tinysky-alt-core-cua-repl.md`，权威）：
  - computer（`sky`）：`cua.getApp(name)→Target`、`cua.listApps()`；Target 有 `getAXState/getScreenshot/getAXStateAndScreenshot/paste/click/drag/pressKey/scroll/selectText/setValue/typeText/performSecondaryAction`。
  - browser：`cua.browsers`、`cua.getBrowser/getTab/createBrowserTab/listBrowsers/listTabs`。
- 安全策略（`docs/tinysky-alt-confirmations.md`）：**Computer Use Confirmations Policy** —— 删除数据/CAPTCHA/权限/敏感数据传输等须用户确认；规定 Hand-Off / Always-Confirm / Pre-Approval / No-Confirm 四档。
- `bin/linux/sky_linux_x64`（原生后端，@oai/cua 也带一份）。

## @oai/sky（v0.6.26，author: noahj）

**角色**：computer（桌面）面的服务客户端。JS 通过 `nodeRepl.rpc("sky", …)` 调用，最终落到 `sky_linux_x64`。

- 入口：`dist/project/cua/sky_js/src/index.js`（导出 `sky`）、`./service`（`service.js`，`handleRpc`）。
- target 分配：
  - `load_options.js`：`process.platform` → `{target:"linux"|"mac"|"windows"}`（可被 `OAI_SKY_CONFIG_PATH` 覆盖）。
  - `create_client.js`：按 target 取 `targets/{linux,mac,windows}/create_client.js`。
- `sky.js`：`sky` = Proxy，把 `setup` 返回的 `methods` 逐个变成 RPC 方法；`target==="linux"` 时额外加 `drag_handle`。
- `service.js`：`handleRpc` 处理 `setup`（返回 `{target, methods}`）、`execute`（分发到 client 方法，`get_screenshot`/`stop_audio_recording` 特殊处理）、`drag_start/move/end`。
- `targets/linux/`（**Linux computer 面**，15 个 .d.ts + .js）：
  - `create_client.js`：`{target:"linux", click, drag, drag_handle, get_screenshot, move, press_key, scroll, type_text}`（可选 audio）。
  - 各方法实现（`sky_linux.js` 调 `bin/linux/sky_linux_$arch` 子进程，stdin JSON；`--mouse-size-px`、`--client x11-full-desktop`、`--timeout-ms`）。
  - `action_settler.js`：动作之间 `post_action_sleep_ms` 间隔调节。
- `bin/linux/sky_linux_x64`：原生后端（见 `../native-binaries/ANALYSIS-sky_linux_x64.md`）。
- 文档：`docs/sky-full-desktop-api.md`（完整 computer API 蓝本）、`docs/sky-window-api.md`、`docs/sky-window2-api.md`。

## @oai/browser-desktop（v0.1.1）

**角色**：browser（浏览器）面运行时。

- 入口（package.json `exports`）：
  - `.` → `scripts/browser-client.mjs`（客户端）
  - `./service` → `scripts/browser-service.mjs`（服务端）
- **`.mjs` 是可读 ESM 源码**，是 browser 面核心实现。
- wasm：`browser-accessibility.wasm.br`（可访问性）、`zxing_reader.wasm`（二维码/OCR）。
- docs 极全：`api.json`、`api-use-behavior.md`、`accessibility.md`、`screenshots.md`、`tab-mentions-iab.md`、`webmcp.md`、`confirmations.md`、`browser-safety.md`、`visibility.md`、`tab-cleanup-{chrome,iab}.md`、`chrome-troubleshooting.md`、`file-uploads.md`、`local-web-development.md`、`session-naming.md` 等。

---

## 三层关系（unified computer use）

```
node_repl (JS runtime)                    ← cua_repl MCP server 启动
   ├─ globalThis.cua = @oai/cua.setupCUA({browser, computer})
   │      ├─ computer: @oai/sky.sky()
   │      │      └─ nodeRepl.rpc("sky") → service.js → target=linux → sky_linux_x64
   │      └─ browser: @oai/browser-desktop.browser-client
   ├─ globalThis.agent = browser 运行时（getBrowser/getTab 等）
   └─ nodeRepl.write(text) / emitImage(bytes)  ← 状态/截图回流模型
```

## 如何继续分析

1. 想让别的 agent"接着写 computer 控制"：读 `@oai-sky/docs/sky-full-desktop-api.md` + `targets/linux/create_client.js`。
2. 想"接 CUA 引擎"：读 `@oai-cua/tinysky_alt/create_tinysky_alt.js` + `@oai-cua/docs/tinysky-alt-core-cua-repl.md`。
3. 想"接 browser 面"：读 `@oai-browser-desktop/scripts/browser-client.mjs` + `docs/api.json`。
4. 想"安全/确认模型"：读 `@oai-cua/docs/tinysky-alt-confirmations.md`。
