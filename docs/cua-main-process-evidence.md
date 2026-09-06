# Computer Use 主进程证据（官方 26.901.31953）

> 来源：官方 `app.asar` 解包后的 `.vite/build/main-C5K7o1Hr.js`（Electron 主进程 bundle）
> 方法：grep 提取字符串/常量/IPC 名（只读）

## native overlay 指示条

主进程把这些常量写入 `computer-use/config.json`（`computer-use`, `config.json`, `#339cff`），由 OWL native helper / Codex Computer Use.app 渲染为**全屏半透明指示条**：

| 常量 | 值 | 含义 |
|---|---|---|
| `computerUseOverlay.usingComputer` | `ChatGPT is using your computer` | 正在使用电脑的提示文本 |
| `computerUseOverlay.escToCancel` | `Esc to cancel` | 按 Esc 取消提示 |
| accent 色 | `#339cff` | 主题蓝 |
| `computer-use-config` | — | 配置读取 key |

**结论**：官方版与社区版一样，computer use 的"正在使用电脑"全屏指示条是一个 **native overlay（独立于 webview 的子层）**，不是渲染进程 JS 的 React 组件。它由主进程写配置、native helper 渲染。

## Computer Use相关 IPC / 常量（主进程）

- `avatar-overlay-computer-use-cursor-changed`：把鼠标光标位置推给 avatar overlay（虚拟指针）
- `computer-use-approval:`：native pipe 协议里的 approval 前缀
- `computer-use-native-pipe-server`：native pipe 服务端 logger 名
- `computer-use-native-pipe`：native pipe 通道
- `computer-use-capture-handler` / `computer-use-capture-native-bridge` / `computer-use-capture-updated`：截图捕获
- `computer-use-app-icons-addon` / `computer-use-app-icons.node`：应用图标
- `computer-use-service-pid` / `computer-use-invalidate-service-pid`：native 服务生命周期
- `computer-use-config`：配置 key
- `cuaReplSurfaces`：`mcp_servers.node_repl` 的 CUA REPL surface（`browser,computer`）
- `computer-use-node-repl.md`：node_repl instructions 使用用例

## 链路（官方，综合主进程 + 引擎源码）

```
用户 @App → 前端 pluginMention → computerUseAppApproval 审批
  → 模型调用 cua_repl MCP server（node_repl scripts/launch.mjs）
      → NODE_REPL_TRUSTED_SERVICES = { sky: @oai/sky/service, browser: @oai/browser-desktop/service }
      → cua.getApp()/getBrowser()
          → computer 面: nodeRepl.rpc("sky") → @oai/sky service→linux target → sky_linux_x64
          → browser 面: @oai/browser-desktop browser-client
  → 主进程 native pipe（computer-use-native-pipe-server）管理 CU helper / screenshot / indicator
  → 状态回流: nodeRepl.write(text) / emitImage(bytes) → 前端
  → approval 拒绝: rejectPendingApprovals("Computer Use native pipe client disconnected")
```
