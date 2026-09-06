# ChatGPT Desktop for Linux — Computer Use 触发 + 审批 UI 逆向报告

> 版本：OpenAI ChatGPT Desktop `chatgpt 26.901.31953`
> 素材：`app/webview/assets/`（从官方 `app.asar` 解包的 6955 个 JS）
> 方法：静态 grep 提取 minified 上下文字符串；只读分析，未修改源文件。
> 目标组件在 **app-primary-7eef500906c5.js**（8MB，4151 行）与 **computer-use-settings-704f9a61c3bf.js**（62KB，单行）以及几个小 bundle。

---

## 0. 一句话结论

用户在主对话 composer 里输入 `@AppName`，弹层中会列出可用的 **native 应用（Mac apps / Desktop apps）** 与 **Computer use 相关插件**；选中后向编辑器文档插入一个 `pluginMention` 节点，并通过节点 attrs 携带 `computerUseAppMentionPath`（形如 `computer-use@openai-primary-runtime?app=<bundleId>`）。提交消息时把这些 mention 收集成 `computerUseAppMentions[]` 随请求发给后台。当模型/CUA 想调用某应用时，后台通过 **MCP elicitation** 下发一个 `computerUseAppApproval` 审批请求，前端弹出一个"**Allow ChatGPT to use {app}?**"对话框，用户可 **Allow this conversation / Always allow / Deny**；approved 后前端调用 host 桥接 `replyWithMcpServerElicitationResponse` 把结果回传后台。

---

## 1. @mention 触发 computer use 的完整流程

### 1.1 ASCII 流程图

```
┌──────────────────────────── 用户操作区 ────────────────────────────┐
│ composer 输入，键入 "@"                                          │
│   └─ 触发 atMentionList（hqt，@mention 弹层）                     │
│        ├─ 搜索 native apps（computer-use 插件提供）                │
│        │    说明：计算机使用能力从 host 桥接“列出可控制的应用”       │
│        └─ 搜索 computer use 相关插件分组                          │
└──────────────────────────────────────────────────────────────────┘
                      │
                      ▼
 用户选中一个 native app（如 “Safari” / “Microsoft Word”）
   └─ item.insertMention → composerController.insertMention(mention, state)
        │
        ▼
 插入 pluginMention 节点
   attrs.path                       = `computer-use@openai-primary-runtime`
   attrs.computerUseAppMentionPath  = `computer-use@openai-primary-runtime?app=<bundleId>`
   attrs.displayName / name         = 应用显示名
                      │
                      ▼
 用户发送消息 → submit 流程（7643609 附近）
   ├─ s.getComputerUseAppMentions()  → [{label:"@App", path}]   （composer.editor view）
   ├─ s.getMentionedComputerUseApps()→ [{appId, displayName}]   （解析出 appId）
   └─ 打包到提交负载 De.computerUseAppMentions 交给后台 q.submit(De,...)
                      │
                      ▼
 后台（CUA 服务）在需要操作该应用时下发 elicitation 审批请求
   └─ 前端 mcpElicitation → zFe 归一化 → zzr 组件分发 → Ozr → wzr(computerUseAppApproval)
                      │
                      ▼
 弹出审批对话框（ComputerUseAppApproval）
   ├─ 首次：附 disclosure 声明
   ├─ 按钮：Always allow (persist="always") / Allow this conversation (persist="session") / Deny
   └─ onSubmit(b('accept'|'decline', persist)) →
        host 桥接 Qx(hostId).replyWithMcpServerElicitationResponse(...)
                      │
                      ▼
 后台收到应答 → 放行 / 拒绝这次 computer use 调用
```

### 1.2 关键实现（app-primary-7eef500906c5.js）

**`getMentionedComputerUseApps()`** —— 从 editor doc 解析出被 @ 的 computer use 应用：
```js
getMentionedComputerUseApps(){
  let e=new Map;
  this.view.state.doc.descendants(t=>{
    if(t.type.name!==`pluginMention`) return!0;
    let n = (attrs.computerUseAppMentionPath as string 且非空) ? attrs.computerUseAppMentionPath : attrs.path;
    if(typeof n!==`string` || Sg(n)?.split(`@`)[0]!==`computer-use`) return!0;   // 必须属于 computer-use 插件
    let r=n.indexOf(`?`);
    if(r!==-1){
      let i=new URLSearchParams(n.slice(r+1)).get(`app`);   // ?app=<bundleId>
      let a = attrs.displayName 或 attrs.name;
      if(i有效 && a有效) e.set(i.trim().toLowerCase(), a.trim())   // {appId, displayName}
    }
    return!0
  })
  return Array.from(e, ([appId,displayName])=>({appId, displayName}))
}
```

**`getComputerUseAppMentions()`** —— 收集用于提交负载的 mention 引用：
```js
getComputerUseAppMentions(){
  let e=new Set;
  this.view.state.doc.descendants(t=>{
    if(t.type.name!==`pluginMention`) return!0;
    let n=t.attrs.computerUseAppMentionPath;
    if(typeof n===`string` && n.length>0)
      e.add(vwe(`@${t.attrs.displayName||t.attrs.name}`, n))   // label + path
    return!0
  })
  return Array.from(e)
}
```

**`insertMentionInRange` / `insertMentionNodeInRange`** —— 把 mention（含 computerUseAppMentionPath）写入节点 attrs：
```js
insertMentionInRange(e,t,n,r=false){
  this.insertMentionNodeInRange(
    uZt(this.view.state.schema, e.kind),          // pluginMention 节点类型
    { name, displayName, path, description, iconSmall, brandColor,
      computerUseAppMentionPath: e.computerUseAppMentionPath ?? `` },   // ← 关键 attr
    t,n,r)
}
```

**@mention 弹层里如何生成 computerUseAppMentionPath（`ROt`）**：
```js
function ROt(e,t){  // e=native app, t=computer-use 插件
  let n=new URLSearchParams({[UOt]: e.bundleId});   // UOt = `app`
  return `${x(t.plugin.id)}?${n.toString()}`         // computer-use@openai-primary-runtime?app=<bundleId>
}
function zOt({app, description, computerPlugin, iconSmall}){
  return { kind:`plugin`, name:xR(app), displayName:xR(app),
           path:ROt(app, computerPlugin),          // 就是 computerUseAppMentionPath
           description, iconSmall }
}
```
> `HOt(e,t)`: 判断 mention path 是否属于 computer-use 插件：`e===x(t.plugin.id) || e.startsWith(`${x(t.plugin.id)}?`)`。
> `BOt(e,t)`: 反解 path 里的 `?app=` 参数。
> 插件本体识别：`FOt(te)=te.find(e=>e.plugin.name===`computer-use`)`，`IOt(...)` 额外要求 `installed && enabled`。marketplace/插件 id：`computer-use@openai-primary-runtime`（`YOt = `openai-primary-runtime``）。

**@mention 弹层分区分组（`QKt`）**：
把 native apps、browser 插件、office 插件、messages 应用合成 mention 项数组，匹配 query，取前 8 项：
```js
P = nativeApps 过滤跳过 bundled/excluded，映射 {kind:`native-app`, app, plugin:computer-use}
F = sort([...browserPlugins(k), ...officeAppPlugins(N), ...messagesApp(M), ...nativeApps(P)],
         native-app 按名称 / 其它按匹配度).slice(0,8)
每项：{label, detail, icon, type:`mention`, insertMention:(composerController, mentionState)=>
        composerController.insertMention(mention, mentionState)}
```
分区标题：`computerUse.label`（"Computer use"），对 native 分区用 `computerUse.nativeApps.mac.title`（"Mac apps"）/ `computerUse.nativeApps.desktop.title`（"Desktop apps"）。

> **不确定**：`computer-use` 插件本体（负责 native app 发现）的具体实现不在已提供的 7 个文件里；应用列表数据来自 host 桥接（`BC`/`kR` 等），我们只看到前端如何消费。native 应用列表如何获得（扫描磁盘 / 系统 API）属于原生层，未在本前端 bundle 中。

---

## 2. computerUseAppApproval 对话框（组件还原）

### 2.1 组件树与调度

```
zzr({conversationId, hostId, pendingRequest})        // 审批请求总分发器
 ├─ l = Mzr(i.elicitation)      // 通用浏览器访问审批（Chrome/Browser origin）→ ARr
 ├─ d = zFe(i.elicitation)      // 归一化 computer use elicitation → 若命中则：
 └─ if(d!=null) → Ozr({...request:d,...})            // 渲染 computer use 审批
      └─ wzr({ApprovalCard:B8, conversationId, hostId,
              onRequestSettled:qde, request, requestId})
           └─ <B8 headerContent=.. title=.. subtitle=.. actions={...}/>   // ApprovalCard
```
- `zFe`：把后台下发的 elicitation 归一化为 `{appDisplayName, persistModes, riskLevel, connectorName, subtitle,...}`（见 1.1 提到的调度）。
- 只有当 `d != null`（即确认是 computer use 辅助裁决）才渲染 `wzr`；否则走浏览器/MCP 通用审批（`Mzr` 分支）。

### 2.2 `wzr` 状态与 props

```js
function wzr({ApprovalCard, conversationId, hostId, onRequestSettled, request, requestId}) {
  const c = a_(vw)            // intl
  const u = fv(y_e) ?? en(`has-approved-computer-use-app`, false)   // localStorage flag
  const [m,h] = useState(null)          // 当前提交 requestId
  const g = request.riskLevel === `high`
  // disclosure subtitle —— 只在“从未批准过任何 computer use app”时显示
  const _ = [
    u===false ? c.formatMessage({id:`composer.computerUseAppApproval.disclosure`, ...}) : void 0,
    request.subtitle
  ].filter(Boolean).join(`\n`) || void 0
  const f = JSON.stringify([hostId, conversationId, requestId])
  const p = useRef(null)
  ...
}
```

### 2.3 提交回调 `b`（onSubmit 核心）

```js
const b = (action, persist) => {
  if(action === `accept`) c.set(y_e, true)          // 记住“已批准过” → 后续不再显示 disclosure
  Qx(hostId).replyWithMcpServerElicitationResponse(
     conversationId, requestId,
     ay(action, action===`accept` && persist != null ? {persist} : null)   // 应答载荷
  ).then(()=>onRequestSettled(action),
         ()=>{ if(p.current===f){ p.current=null; h(null) } })            // 失败重置 loading
}
```
> `ay(action, persistPayload)`打包应答；`persist` 取自 `request.persistModes`。

### 2.4 按钮（approve/deny/always/session）

| 按钮 | label i18n id | defaultMessage | 提交 |
|---|---|---|---|
| **Always allow** | `composer.computerUseAppApproval.action.alwaysApprove` | `Always allow` | `b('accept','always')` |
| **Allow this conversation** | `composer.computerUseAppApproval.action.approve` | `Allow this conversation` | `D=()=>b('accept', persistModes.includes('session')?'session':null)` |
| **Deny**（在 ApprovalCard 内） | — | — | `O=()=>b('decline')` |

构造 `actions` 对象：
```js
const w = m === f                       // 是否 loading
const T = persistModes.includes(`always`)
  ? { label:<Always allow>, onClick:()=>b(`accept`,`always`) } : void 0
const D = () => b(`accept`, persistModes.includes(`session`) ? `session` : null)  // 会话级
const O = () => b(`decline`)                                                     // 拒绝
const k = { isLoading:w, leadingAction:T, approveLabel:E, onApprove:D, onDeny:O }
// 渲染
<ApprovalCard headerContent={x} title={S} subtitle={_ /*disclosure*/} actions={k}/>
```
> `headerContent`：`riskLevel==='high'` 显示 "Elevated Risk" 徽标（`composer.mcpToolCallApproval.elevatedRiskLabel`），否则显示 computer-use 插件图标（`computer-use-plugin-icon-*.png`）+ `connectorName`。

### 2.5 `persistModes` 语义

| mode | 含义 |
|---|---|
| `always` | “Always allow” → persist 到 settings（成为 always-allowed app） |
| `session` | “Allow this conversation” → 仅在当前会话生效 |

> **不确定**：`request.persistModes` 数组由后台下发，前端只判断是否 `includes('always'/'session')`；具体后台如何构造该数组（可能根据该 app 是否已在 `always allowed apps` 列表）不在前端 bundle。

---

## 3. computerUseAvailability / isComputerUseAvailable 判定

### 3.1 hook 链

```
hqt (atMentionList) 与 ComputerUseSettings 都使用：
  x = rFe({enabled, hostId})                    → { available, isLoading, ... }   (computerUseAvailability)
  S = {computerUseAvailability: x, hostId}
  C = Zje(S)                                    → { available, ... }
  T = ie({enabled, hostId})                     → 外部浏览器可用性 { available, ... }
  D = 内嵌浏览器可用性
  ...
  q = Hbe({plugins, isComputerUseAvailable: x.available,
           isExternalBrowserUseAvailable: T.available,
           isInAppBrowserUseAvailable: D.available,
           isMessagesAvailable: C.available})
```

### 3.2 观察到的判定要素

- `isComputerUseAvailable` 最终取值来自 `computerUseAvailability`（`rFe` hook 返回的 `.available`）。
- 判定依赖 **hostId** 与 **plugin availability**：`Hbe({ plugins, isComputerUseAvailable, ... })` 会在插件列表层面对 computer-use 插件做可见性/可用性过滤。
- `rFe`/`Zje`/`ie` 是压缩导入名（来自 app-initial 或已加载 chunk），它们把 `computerUseAvailability` 作为 React Query 的响应 shape（`{available, isLoading, error}`）。

### 3.3 为什么可用 / 不可用（推断）

从 `kR({enabled})` 拉 `nativeApps`、`FOt/IOt` 找 computer-use 插件（需 `installed && enabled`）、以及 `computerUseAvailability` 是否 `available` 共同决定：

- **可用**：`computerUseAvailability.available===true`，且 `computer-use` 插件已安装且启用（`IOt` 命中）。
- **不可用**：`computerUseAvailability.available===false`，或 computer-use 插件未安装/未启用，或平台/宿主不支持。

> **不确定**：`computerUseAvailability` 的**具体判定条件**（是检查 OS 版本？是否 native 运行时进程在跑？是否功能开关/feature flag？）在 `rFe` 的实现内，而 `rFe`/`Zje`/`ie` 函数体不在提供的 7 个文件里。设置页 `Tr` 通过 `computerUseAvailability.available` 控制是否渲染 "Always-allowed apps" 与后续行；`settings.computerUse.install.empty`（"Computer Use plugins unavailable"）是插件找不到时的空态。`availability` 的精确来源需查 host 桥接或 app-initial 中 `rFe` 的完整定义（本次未定位到其函数体）。

---

## 4. 设置页 computer use 布局（computer-use-settings-704f9a61c3bf.js）

### 4.1 路由与入口

- 导出：`export { Tr as ComputerUseSettings }`。
- `Tr`（主设置页）根据 URL 路由分支：
  - `browserFamily=chrome|edge|...` 且浏览器已支持 → `<Lr browserFamily>`（浏览器专用设置页）
  - `browserFamily` 但不在平台支持里 → `<Redirect to=/settings/computer-use>`
  - `pathname=/settings/computer-use/messages` → `<Ir>`（Messages 设置页）
  - 默认 → 总览页（`d/g` slug + subtitle `settings.computerUse.subtitle` = "Manage how ChatGPT uses other applications on your computer"）
- Breadcrumb（`Un`）：`[{id:'computer-use', label:<Computer use>, onClick:→'/settings/computer-use'}]`（`fn` = toolbar-breadcrumb 组件）。

### 4.2 总览页结构（`Tr`）

```
<F title={d} subtitle={f}>                      // 顶部：slug 图标 + subtitle
  <P>                                          // Page
    <P.Header title=<Control/> />              // settings.computerUse.install.title = "Control"
    <P.Content>
      <Er computerUseAvailability platform/>   // 插件行列表（anyApp、browsers、messages、office…）
      {platform===macOS && available && <Vr/>} // Locked use（仅 macOS）
    </P.Content>
  </P>
  {available && (
    <P>
      <P.Header title=<Always-allowed apps/> />            // settings.computerUse.allowedApps.title
      <P.Content><Wr/></P.Content>                        // 允许的应用列表 + 移除对话框
    </P>
  )}
  <zr/>                                        // 点击音效下拉
</F>
```

### 4.3 插件行列表（`Er`）

插件行通过 `settings-plugin-selection`（`Cn`）渲染 `items[]`：

- **Any App**（`settings.computerUse.anyApp.title`="Any App" / desc="Let ChatGPT control apps on your computer"）—— computer-use 插件行。
- **浏览器**（经 `Rn(platform)`）：`macOS→[chrome]`，`windows→[chrome,edge]`，`linux→[chrome]`；再加 `zn()` 扩展浏览器（"More browsers" 可展开）。
  - 各浏览器行：`Google Chrome` / `Microsoft Edge` / `Safari`；状态含 **Installed / Not installed** 徽标；操作按钮 `Install` / `Manage`；toggle tooltip `Show @{browserName} in the composer` / `Hide @{browserName}`（`settings.computerUse.browser.toggleAria`）。
  - 扩展浏览器描述：`moreBrowsers.description`="Set up extensions for more browsers"。
  - Safari：不可用行，文案 `settings.computerUse.safari.description`="Safari extension support is coming soon"。
- **Messages**（`settings.computerUse.messages.pluginTitle`="Messages"，desc="Let ChatGPT read and send messages"）→ 点击进入 `/settings/computer-use/messages`。
- **Microsoft Excel / PowerPoint**（`microsoftExcelPluginTitle` 等）：仅 macOS/windows，toggle 开关（`connector_openai_codex_document_control`）。

### 4.4 Messages 子页（`Ir` → `_r` → `vr`）

两个分区：
1. **Always allowed to send**（`settings.computerUse.messages.allowedChats.title`）—— 列出 `approvedChats`，允许移除；空态 "None yet"；描述 "By default, ChatGPT sends messages only after you approve the message and its recipients"。
2. **Read access**（`settings.computerUse.messages.readAccess.title`）—— 每会话读权限：`Always allow` / `Always ask` / `Never allow`（`readAccess.alwaysAllow/ask/alwaysDeny`）；"Add" 弹窗可选 chat + 权限（chat 搜索 `messages-chat-search`，权限 `chatSearch.*` 状态）。

### 4.5 Always-allowed apps（`Wr` → `Gr` → `Yr`/`Xr`）

- 列表项：图标（`iconDataURL` 或首字母圆角块）+ `displayName` + 移除按钮（`allowedApps.removeAriaLabel`）。
- 空态：`allowedApps.emptyTitle`="None yet"。
- 移除对话框：title `Remove “{displayName}” from always allowed apps?`，subtitle `ChatGPT will ask to use “{displayName}” in the next computer use session.`，按钮 `Cancel`/`Remove`；移除后 toast `Allowed app removed`。

### 4.6 Locked use（`Vr`，仅 macOS）

- label `settings.computerUse.backgroundAuth.label`="Locked use"；desc "Let ChatGPT use your Mac when it's locked. `<a>Learn more</a>`"。
- 图标：computer+lock 小图（`Pn`，`computerImageDataUrl`/`lockImageDataUrl`）。
- 开关：`ariaLabel`="Enable Locked use"；开启/关闭 toast `Locked use enabled/disabled`；错误 `Unable to update Locked use`。

### 4.7 点击音效（`zr`）

下拉三选项（`oi` 常量，默认 `foregroundClicks`）：
| 值 | label i18n | defaultMessage |
|---|---|---|
| `foregroundClicks` | `settings.computerUse.sounds.foregroundClicks` | `Play sounds for foreground clicks` |
| `foregroundAndBackgroundClicks` | `settings.computerUse.sounds.foregroundAndBackgroundClicks` | `Play sounds for foreground and background clicks` |
| `off` | `settings.computerUse.sounds.off` | `Don’t play sounds` |

---

## 5. Computer use 相关 i18n 字符串清单

### 5.1 审批对话框（app-primary）

| id | defaultMessage | 中文 |
|---|---|---|
| `composer.computerUseAppApproval.disclosure` | `Computer Use lets ChatGPT use apps on your computer. It may take screenshots of app contents while working. You can choose which apps ChatGPT can access, stop actions at any time, and control whether screenshots are used for training.` | Computer Use 允许 ChatGPT 使用你电脑上的应用。工作时它可能截取应用内容的截图。你可以选择 ChatGPT 可访问哪些应用、随时停止操作，并控制截图是否用于训练。 |
| `composer.computerUseAppApproval.title.chatgpt` | `Allow ChatGPT to use {appDisplayName}?` | 允许 ChatGPT 使用 {appDisplayName} 吗？ |
| `composer.computerUseAppApproval.action.alwaysApprove` | `Always allow` | 始终允许 |
| `composer.computerUseAppApproval.action.approve` | `Allow this conversation` | 允许此对话 |

（另见同一组件复用：`composer.mcpToolCallApproval.elevatedRiskLabel` = `Elevated Risk`。）

### 5.2 @mention 弹层 / native apps（app-primary）

| id | defaultMessage | 中文 |
|---|---|---|
| `computerUse.label` | `Computer use` | 电脑使用 |
| `computerUse.nativeApps.mac.title` | `Mac apps` | Mac 应用 |
| `computerUse.nativeApps.mac.loading` | `Loading Mac apps…` | 正在加载 Mac 应用… |
| `computerUse.nativeApps.desktop.title` | `Desktop apps` | 桌面应用（回退分区标题） |
| `computerUse.nativeApps.desktop.loading` | `Loading desktop apps…` | 正在加载桌面应用… |
| `computerUse.nativeApps.microsoftExcel.detail` | `Live workbook control` | 实时工作簿控制 |
| `computerUse.nativeApps.microsoftPowerPoint.detail` | `Live presentation control` | 实时演示控制 |
| `composer.atMentionList.plugins` | `Plugins` | 插件（@mention 分区标题） |
| `composer.atMentionList.pluginsLoading` | `Loading plugins…` | 正在加载插件… |

### 5.3 设置页（computer-use-settings，91 条，选列主要）

**控制与入口**
- `settings.computerUse.install.title` = `Control`
- `settings.computerUse.breadcrumb.computerUse` = `Computer use`
- `settings.computerUse.subtitle` = `Manage how ChatGPT uses other applications on your computer`

**Any App / 浏览器 / 办公**
- `settings.computerUse.anyApp.title` = `Any App`；`anyApp.description` = `Let ChatGPT control apps on your computer`
- `chrome.pluginTitle`=`Google Chrome`；`edge.pluginTitle`=`Microsoft Edge`；`safari.pluginTitle`=`Safari`
- `safari.description`=`Safari extension support is coming soon`
- `browser.toggleAria`=`Toggle the @{browserName} browser reference`
- `browser.enableTooltip`=`Show @{browserName} in the composer`；`disableTooltip`=`Hide @{browserName} in the composer`
- `browser.installExtension`=`Install`；`browser.manage`=`Manage`；`browser.reinstallExtension`=`Reinstall extension`；`browser.removeExtension`=`Remove extension`
- `browser.loading`=`Loading browser settings…`
- `browser.installPluginDescription`=`Install the {pluginName} plugin to enable browser control`
- `browser.description`=`Use a browser extension for added control`
- `moreBrowsers.title`=`More browsers`；`moreBrowsers.description`=`Set up extensions for more browsers`
- `chrome.installed`=`Installed`；`chrome.notInstalled`=`Not installed`
- `microsoftExcel.pluginTitle`=`Microsoft Excel`；`microsoftExcel.description`=`Let ChatGPT use Microsoft Excel add-in for additional control`；`microsoftExcel.appToggleAria`=`Toggle Microsoft Excel live control`；`enable/disableToggleTooltip`=启用/禁用实时控制
- `microsoftPowerPoint.*` 同 Excel 结构

**Messages**
- `messages.pluginTitle`=`Messages`；`messages.description`=`Let ChatGPT read and send messages`
- `messages.allowedChats.title`=`Always allowed to send`；`allowedChats.description`=`By default, ChatGPT sends messages only after you approve the message and its recipients`
- `messages.allowedChats.loading/loadError/empty`=Loading allowed chats…/Unable to load allowed chats/None yet
- `messages.allowedChats.removeAriaLabel`=`Remove {displayName}`；`removeError`=`Unable to remove send permission`
- `messages.readAccess.title`=`Read access`；`readAccess.description`=`By default, ChatGPT uses messages only from conversations you approve to answer your requests`
- `messages.readAccess.alwaysAllow`=`Always allow`；`ask`=`Always ask`；`alwaysDeny`=`Never allow`
- `messages.readAccess.add`=`Add`；`addDialog.title`=`Add a chat`；`addDialog.chat`=`Chat`；`addDialog.access`=`Read access`；`addDialog.description`=`Choose whether ChatGPT can use messages from a specific chat to respond to your requests`
- `messages.chatSearch.placeholder`=`Search chats`；`searching`=`Searching chats…`；`empty`=`No chats found`；`retry`=`Try again`；`permissionsPending`=`Finish Messages permission setup, then try again`；`permissionsRequired`=`Allow Messages permissions to search chats`
- `messages.removePermissionDialog.cancel`=`Cancel`；`confirm`=`Remove`
- `messages.allowedChats.removeDialog.title`=`Remove saved send permission for “{displayName}”?`；`subtitle`=`ChatGPT will ask before sending messages to this chat`
- `messages.readAccess.removeDialog.title`=`Remove saved read permission for “{displayName}”?`；`subtitle`=`ChatGPT will ask before using messages from this chat`
- `messages.loading`=`Loading Messages settings…`
- `messages.readAccess.loading/loadError/empty`=Loading read permissions…/Unable to load read permissions/None yet
- `messages.readAccess.saveError`=`Unable to update read permission`；`removeError`=`Unable to remove read permission`

**Allowed apps**
- `settings.computerUse.allowedApps.title`=`Always-allowed apps`
- `allowedApps.loading`=`Loading allowed apps…`；`loadError`=`Unable to load allowed apps.`
- `allowedApps.emptyTitle`=`None yet`
- `allowedApps.removeDialogTitle`=`Remove “{displayName}” from always allowed apps?`；`removeDialogSubtitle`=`ChatGPT will ask to use “{displayName}” in the next computer use session.`；`removeDialogCancel`=`Cancel`；`removeDialogConfirm`=`Remove`
- `allowedApps.saveError`=`Unable to save allowed apps`；`saved`=`Allowed app removed`；`removeAriaLabel`=`Remove {displayName}`

**Locked use / 音效**
- `settings.computerUse.backgroundAuth.label`=`Locked use`；`backgroundAuth.description`=`Let ChatGPT use your Mac when it's locked. <a>Learn more</a>`；`backgroundAuth.ariaLabel`=`Enable Locked use`
- `backgroundAuth.enabled`=`Locked use enabled`；`disabled`=`Locked use disabled`；`saveError`=`Unable to update Locked use`
- `sounds.foregroundClicks`=`Play sounds for foreground clicks`；`sounds.foregroundAndBackgroundClicks`=`Play sounds for foreground and background clicks`；`sounds.off`=`Don’t play sounds`

**通用（共用）**
- `settings.computerUse.manage`=`Manage`；`install.button`=`Install`；`install.empty`=`Computer Use plugins unavailable`

### 5.4 其它小 bundle

- **computer-history-suggestion-prompt**：`settings.chronicle.history.pluginDisplayName`=`Computer History`；`createNamedSuggestedSkillPrompt`=`Create a new "{name}" skill based on the description below. Consult the memory at {memoryFilePath} and the events.jsonl files cited there to understand the recorded workflow and my actions.`；`createNamedSuggestedAutomationPrompt`=`Create a new "{name}" automation based on the description below. ... Use my local timezone and a new chat for scheduled runs.`
- **computer-history-suggestions**：仅 macOS 且 chronicle 配置开启才启用（`e(v)!==`macOS`||!e(p,'3488289778')`）。

---

## 6. 主对话里 computer use 运行时 UI

- **@mention 弹层**：`hqt`（atMentionList）。分区包含 native apps（Mac apps/Desktop apps）与 computer use 插件；native app 项由 `QKt` 组装，且每项 `insertMention` 写 `computerUseAppMentionPath`。
- **mention 高亮**：在主导入区，`pluginMention` 节点按 `attrs.path`（`computer-use@openai-primary-runtime?app=...`）+ `displayName` 渲染（`MR` 组件，带 `brandColor`/`iconSmall`/`fallbackIcon`/`tooltipText`）。`xR(app)=lo(app)?cD:app.displayName` 决定显示名（非 macOS 用兜底名 `cD`）。
- **触发后的接口**：提交时将 `computerUseAppMentions[]`（label+path）附加到请求载荷；native app 图标用 `BC('computer-use-native-desktop-app-icon', {appPath})` 拉取。
- **审批运行时**：`zzr` 监听 `pendingRequest`，按 elicitation 类型分发；computer use ego 走 `Ozr→wzr`，弹 `ApprovalCard`（`B8`）。

> **不确定**：主对话里 CUA 运行时的**屏幕/tool 调用卡**、**实时 appshot 预览控件**等更细的运行时 UI 不在本组 7 个文件中（`appshotContexts` 只在 submit 载荷字段里出现）。@mention 高亮的视觉样式（颜色/徽标）细节需看 `pluginMention` 节点 spec 与 CSS（未定位）。

---

## 7. 证据定位速查表（app-primary-7eef500906c5.js 行/偏移）

| 目标 | 位置 |
|---|---|
| `wzr`（approval 组件） | 约 offset 7325491 起 |
| `zFe` elicitation 归一化 | import `uAt as zFe`（offset 65185） |
| `zzr` 审批分发 | offset ~7330500 起 |
| `zOt`/`ROt`/`xR`/`BOt`/`HOt`/`FOt`/`IOt`/`LOt` | offset ~1449800-1453200 |
| `getMentionedComputerUseApps`/`getComputerUseAppMentions`/`removePluginMentions` | offset ~1976931-1977800 |
| `insertMentionInRange`/`insertMentionNodeInRange` | offset ~1988900-1989900 |
| @mention list `hqt` + `QKt` section build | offset ~1885600-1899300 |
| submit 打包 `computerUseAppMentions` | offset ~7643100-7645300 |
| capability 归类（computerUse/browserUse） | offset ~7305700-7307200 |

（注：本文件为 4151 行的多行文件，上面 offset 是字符串索引；用 `grep -n` 可映射到具体行号。）

---

## 8. 不确定项汇总

1. **`computerUseAvailability.available` 的具体判定条件**：函数体（`rFe`/`Zje`/`ie`）未在提供的 7 个文件内，无法给出精确的平台/宿主判断。
2. **`computer-use` 插件发现 native 应用的方式**：native 应用列表数据来自 host 桥接，底层实现（磁盘扫描/系统 API/进程枚举）在前端 bundle 之外。
3. **`persistModes` 数组的构造来源**：前端只消费，构造逻辑在后台/native。
4. **`zFe` 归一化 elicitation→computerUseApproval 的精确字段映射**：只看到 `request.appDisplayName/persistModes/riskLevel/connectorName/subtitle` 的消费端；elicitation 原始 schema 未展开。
5. **主对话运行时 CUA 的 appshot/屏幕预览等细节 UI**：不在本组文件。
