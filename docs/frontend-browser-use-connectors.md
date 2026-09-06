# OpenAI ChatGPT Desktop for Linux (chatgpt 26.901.31953) — Browser Use / Computer Use / Connectors 前端证据报告

> 逆向分析。素材：`/home/huashen/work/chatgpt-deb/app/webview/assets/` 下的 minified JS（只读 grep 分析，未修改任何文件）。
> 文件为单行 minified，采用 `grep -oE` / python 正则提取上下文。**所有结论均附出处（文件名），未标注为「不确定/推断」的均来自代码字面证据。**

---

## 0. 结论速览

1. **Browser Use（内置浏览器，in-app browser=IAB）** 与 **Computer Use（桌面 App 控制）** 在**前端是两个独立但相邻的 Settings 页面**，由同一个 settings 路由表注册，导航上紧挨着（`browser-use` 在前、`computer-use` 在后）。
2. 二者共享一个统一的**插件注册表**（`uTt`）和一套 **`codex/toolSurface` 元数据 schema**（`BKn`），用于在会话/工具调用里区分「browserUnse 控制」与「computerUse 控制」。
3. 存在一个 **`unified-computer-use`** 隐藏插件，其 MCP server 名为 **`cua_repl`**——这是 "unified computer use" 的**后端统一面**（用 `cua_repl` 替代原来分离的 browser runtime + computer use runtime）。
4. **connector** 与 computer use/browser use 是两个不相交的集成层：
   - **Connector = 外部数据/应用源**（gmail、google-drive/docs/sheets/slides/calendar、github、notion、linear、slack、salesforce、box、dropbox、figma、outlook、teams、sharepoint 等），通过 hostname 映射 + OAuth 接入，出现在项目的 Sources 标签、自动化建议、代码review 中。
   - **Computer Use** 用 `connector_openai_codex_document_control` 这一个特殊 connector id 来**标识文档控制的 Codex 插件**。
5. **Chrome 插件/浏览器插件** 分两层：
   - **Computer Use 的浏览器插件**（chrome/edge/safari/brave/opera/vivaldi 等 Chromium 家族）通过浏览器扩展（Chrome Web Store 的 `ChatGPT for Chrome` / `Codex` 扩展）+ 原生消息通道（nativeMessaging）控制真实桌面浏览器。
   - **Browser Use 的内置浏览器（IAB）** 不需要外部扩展，是 App 内嵌的 Chromium WebView。

---

## 1. Browser Use 与 Computer Use 的前端关系

### 1.1 Settings 路由注册（同一个路由表，相邻并列）

`app-initial-c8dbea294abe.js`（settings 懒加载映射）：

```js
"computer-use": m3(async()=>(await W(async()=>{let{ComputerUseSettings:e}=await import(`./computer-use-settings-704f9a61c3bf.js`)...)).ComputerUseSettings),
"browser-use":   m3(async()=>(await W(async()=>{let{BrowserUseSettings:e}=await import(`./browser-use-settings-1434114c4212.js`)...)).BrowserUseSettings),
```

同表还有 `general-settings`、`mcp-settings`、`plugins-settings`、`connections`(`settings/connections`) 等。**两个 Use 是同级的懒加载页面组件**，各自独立 bundle。

### 1.2 子路由（各自二级页）

`app-initial-c8dbea294abe.js`：

```
path:`computer-use/messages`                    → 渲染 slug=`computer-use`
path:`browser-use/extensions`                   → 渲染 slug=`browser-use`
path:`browser-use/downloads`
path:`browser-use/history`
path:`browser-use/contact-info`
path:`browser-use/passwords`
path:`browser-use/site-settings/*`
```

注：Computer Use 目前只暴露 `messages` 子页（macOS Messages ），Browser Use 暴露 6 个二级页。**Linux 下 computer-use 的 messages 子路由存在，但 Messages 插件标注为 macOS（见 §3.4）**。

### 1.3 Settings 导航顺序（侧面导航的并列位置）

`app-initial-c8dbea294abe.js` settings nav slug 数组：

```
... {slug:`debug`},{slug:`browser-use`},{slug:`computer-use'},{slug:`mcp-settings'},{slug:`hooks-settings'},{slug:`plugins-settings'},{slug:`skills-settings'},{slug:`data-controls'} ...
```

即 **`browser-use` 与 `computer-use` 相邻**，Browser 在 Computer use 之前。导航 label：

- `settings.nav.browser-use` → `Browser`（"Title for in-app browser settings section"）
- `settings.nav.computer-use` → `Computer use`（"Title for computer use settings section"）

### 1.4 browser-use 页面副标题显式引用 computer use 设置

`browser-use-settings-1434114c4212.js`：

```js
id:`settings.browserUse.subtitle`
defaultMessage:`Manage the built-in browser. Browser extensions can be set up in <computerUseSettingsLink>computer use settings</computerUseSettingsLink>`
values:{computerUseSettingsLink:Fi}   // Fi = 指向 /settings/computer-use 的链接
```

**这是前端最重要的一条 cross-link**：内置浏览器(Browser Use)的「扩展管理」被指引到 **Computer Use 设置**里去配置。即 **browser-use 管内置浏览器本身，而「浏览器扩展」归 computer-use 管**——说明外置浏览器扩展是 computer-use 生态的一部分。

### 1.5 前端的并列/切换关系 ASCII

```
                              ┌────────────────────────────────────────────────┐
                              │           Settings 侧边导航 (settings nav)       │
                              └────────────────────────────────────────────────┘
                     ┌──────────────┬──────────────────────────────────────────────┐
                     │  ... debug    │   browser-use (Browser)   │  computer-use   │
                     │               │   ▲ 相邻并列                │  (Computer use)│
                     │               │                             │                │
                     └───────────────┴──────────────────┬──────────┴────────────────┘
                                                        │
   ┌───────────────────────────────┐                    │         ┌────────────────────────────┐
   │  Browser Use (IAB) 内嵌浏览器    │◄── 子链接 ────────────────────────►│  Computer Use 控制桌面App     │
   │  browser-use-settings.js       │  "Browser extensions can be       │  computer-use-settings.js    │
   │  页面副标题链接到 computer use   │   set up in computer use settings" │                              │
   │  子路由: extensions/downloads/ │                                    │ 子路由: messages            │
   │  history/contact-info/passwords│                                    │ 控制行: Any App, Chrome,    │
   │  /site-settings/*              │                                    │ Edge, Safari, Messages,     │
   └───────────────────────────────┘                                    │ Excel, PowerPoint            │
                                                                        └──────────────┬─────────────┘
                                                                                       │
             ┌────────────────────────────────────────────────────────────────────────┐
             │  统一 toolSurface schema (BKn)  —— 会话/工具调用如何归类一次「控制」       │
             │  kind=browserUse  (backend: chrome|iab|cdp, browserFamily)              │
             │  kind=computerUse (app: {kind:appId|displayName})                       │
             └────────────────────────────┬───────────────────────────────────────────┘
                                          │
             ┌────────────────────────────────────────────────────────────────────────┐
             │  统一插件注册表 uTt + MCP server 映射                                    │
             │  unifiedComputerUse { mcpServerName:cua_repl, name:unified-computer-use} │
             │  browser {mcpServerName:Fwt=browser}  computerUse {name:computer-use}     │
             │  chrome/chrome-dev/chrome-internal {name:chrome...}                      │
             └────────────────────────────────────────────────────────────────────────┘
```

### 1.6 会话/工具调用的归类（source.kind / invocation.server）

`app-initial-c8dbea294abe.js`（插件分组 `NKn`）：

```js
if(e.source?.kind===`browserUse`){
  let t=e.source.backend===`chrome`?e.source.browserFamily??`chrome`:void 0;
  if(t==null) return {groupKey:LKn/*browser-use*/, logoUrl:null, name:LKn, usesBrowserIcon:!0};
  let n=t===`chrome`;
  return {groupKey:n?RKn/*browser-use:chrome*/:`browser-use:${t}`, ...};
}
return e.source?.kind===`computerUse`||e.invocation.server===`computer-use`
  ? {groupKey:zKn/*computer-use*/, ...} : null;
```

- groupKey 常量（`UKn`）：`LKn="browser-use"`, `RKn="browser-use:chrome"`, `zKn="computer-use"`。
- **`browser-use`** 这一组就是内置浏览器（backend 可能是 `iab`）。
- **`browser-use:chrome` / `browser-use:<family>`** 是电脑上真实 Chrome 及 Chromium 家族（用对应浏览器图标）。推断：`backend=chrome` 时才有 browserFamily。
- **`computer-use`** 是桌面 App 控制（Any App / 具体 app）。

`codex/toolSurface` schema（`BKn`），**这就是「统一 computer use 前端」在数据层的体现**——同一份元数据同时描述两类控制面：

```js
BKn = Y({"codex/toolSurface": Jh(`kind`, [
  Y({kind:Qh(`browserUse`), backend:Zh([`chrome`,`iab`,`cdp`]), browserFamily:...}),
  Y({kind:Qh(`computerUse`), app:Jh(`kind`,[Y({kind:Qh(`appId`),appId:...}), Y({kind:Qh(`displayName`),displayName:...})]).nullable()})
])})
```

### 1.7 「Browser Use = 控制内置浏览器」的文案佐证

`browser-use-settings-1434114c4212.js`：

```js
settings.browserUse.control.description → "Let ChatGPT control the built-in browser"
```

---

## 2. Browser Use 设置 UI 布局

来源：`browser-use-settings-1434114c4212.js` + `browser-use-settings-visibility-cc8557dcc020.js`。

### 2.1 主页面组装（section 顺序，`BrowserUseSettings` 返回的 Fragment）

```
Fragment [
  B  = browser plugin control 区 (ia)          ← "Let ChatGPT control the built-in browser" 行 + Install/管理
  ne = General  section      (D.Header "General")       → qi(),Yi(),Xi(),Qi(includeHistory),若开则 Vi(),Ki()
  V  = Autofill and passwords section (D.Header)
  H  = Extensions section    (D.Header)                → Bi()
  U  = Downloads section     (Li)                        → 仅当 downloads.enabled
  W  = fr 组件 {backend:`iab`, browserUseEnabled, showHistory, showWebMcp, siteSettingsRow}
]
```

### 2.2 General 区（qi/Yi/Xi/Qi/Vi/Ki 子组件）

对应 i18n（`settings.browserUse.*`）：

- `showFullUrl` → "Show full URL"（地址栏显示完整 URL）/ desc 含 path/query/fragment
- `localUrlOpenTarget` → "Local URL open destination"（本地开发站点默认打开目标：ChatGPT=in-app, Default browser=external）
- `openLinkInTargetPreference`（settings.general.*）→ "Web URL and link open destination"（链接默认打开目标：ChatGPT / Default browser）
- `browserSettings.manage` → "Manage"（browser settings 行的按钮）
- `browser.annotationScreenshots` → "Annotation screenshots"（"- Always include" / "- Only on drag selection"）+ desc "Screenshots help ChatGPT better understand and address comments, but increase plan usage"
- `clearBrowsingData` → "Browsing data" 行（清 history/siteData/cache/downloads）
- `browsingHistory` / `downloadHistory` 入口
- `siteSettings` → "Site settings"
- `extensions` → "Extension manager"（管理扩展）
- `passwordManager` → "Password manager"
- `contactInfo` → "Contact info"

### 2.3 浏览器 profile 导入 + 站点/权限（fr 组件 backend=iab）

`fr` 组件以 `backend:"iab"` 挂载，字段：`browserUseEnabled`、`showHistory`、`showWebMcp`、`siteSettingsRow`。
- `profileImport` → "Import…"（导入 Chrome 数据）
- `siteSettings` 面包屑项：camera/microphone/location/notifications/popups/javascript/cookies/clipboard/usb/devices/sound/handlers/protected content/automatic downloads/background sync/images/intrusive ads 等站内权限

### 2.4 清除浏览数据对话框（`browser-use-settings-visibility`）

- 顶部面包屑：`browser → Settings → Site settings`（`browserSettings.breadcrumb.*`）
- 分类：`history` / `siteData`(Cookies and site data) / `cache` / `downloads`(Download history) / `formData`(Autofill form data) / `siteSettings`(Site settings)
- 时间范围：`lastHour`/`lastDay`/`lastWeek`/`lastMonth`/`allTime`
- 按钮：`cancel`/`confirm`("Delete data"), 各类 `clearXxx`/delete buttons + 成功 toast `xxxCleared`
- 顶部导航：`back`/`forward`（`browserSettings.navigation.*`）

### 2.5 下载历史/下载管理（`downloads.popover.*`、`downloads.status.*`）

- 下载位置：`downloaded`/`paused`/`failed`/`canceled`/`missingFile`/`starting`
- 剩余：`remainingSeconds/remainingMinutes/remainingHours/remainingNow`
- 操作：`pause`/`resume`/`cancel`/`open`/`copyAddress`/`copyPath`/`remove`/`showInFinder|FileExplorer|FileManager`

### 2.6 Browser Use 插件可用性 / origin 策略（`browser-use-origin-state-queries`）

浏览器 origin 前端策略，keyPath 写入后端：

```js
// capability → keyPath
history   → `browser_use.allow_history_access`
origin    → `browser_use.default_origin_policy.access`
download  → `browser_use.default_origin_policy.downloads`
upload    → `browser_use.default_origin_policy.uploads`
fullCdp   → `browser_use.default_origin_policy.full_cdp_access`
// per-origin: `browser_use.origins.<canonicalPattern>` {access,downloads,uploads,full_cdp_access}
```

可用性门控 `B`：`allowBrowserAndComputerUse`、`featureRequirements.browser_use`、`browser_use_external`。后端类型：`iab`(内置) / `extension` / `cdp`。
- `iab` 可用 → `in_app_browser!==false && browser_use!==false`
- `extension` 可用 → `browser_use_external!==false`
- `cdp`/undefined 可用 → `browser_use!==false`

> 注意出现 `allowBrowserAndComputerUse` 字段名——**前后端都把 browser use 与 computer use 并列在同一开关下**（"允许 Browser Use AND Computer Use"）。

---

## 3. Computer Use 设置 UI（与 Browser Use 并列的兄弟页面）

来源：`computer-use-settings-704f9a61c3bf.js`。

### 3.1 副标题

```js
settings.computerUse.subtitle → "Manage how ChatGPT uses other applications on your computer"
```

### 3.2 控制行（plugin 列表）——browser 与 computer 并列呈现

`computer-use-settings.js` 构建 `L` 列表，**在同一个「Control」区**里排布：

- **Any App**（`computerUse.anyApp.title` → "Any App"）：让 Codex 控制用户电脑上的任意 App（desc "Let ChatGPT control apps on your computer"）。
- **Chromium 浏览器行**（chrome / edge / brave / opera / vivaldi），每个 browserFamily 一个控制行：
  - `browser.pluginTitle` → Google Chrome / Microsoft Edge / Safari
  - `browser.description` → "Use a browser extension for added control"（未设置时）
  - `browser.installPluginDescription` → "Install the {pluginName} plugin to enable browser control"
  - `browser.installExtension` → "Install"（装 Chromium 扩展）
  - `browser.manage` / `browser.reinstallExtension` / `browser.removeExtension`
  - `browser.toggleAria` → "Toggle the @{browserName} browser reference"（在 composer 显示/隐藏 @chrome 引用）
  - 状态徽标：`chrome.installed`/`chrome.notInstalled`
- **更多浏览器化 disclosure** (`computerUse.moreBrowsers.title` → "More browsers"，desc "Set up extensions for more browsers")
- **Messages**（`computerUse.messages.*`，macOS）：读/发消息 + 已允许会话管理
- **Microsoft Excel / PowerPoint**（add-in 插件行）：`microsoftExcel.*`/`microsoftPowerPoint.*`

### 3.3 Browser 家族映射（平台差异）

`computer-use-settings.js`：

```js
function Rn(e){switch(e){
  case`macOS`: return[`chrome`];
  case`windows`: return[`chrome`,`edge`];
  case`linux`: return[`chrome`];   // ← Linux 默认只有 Chrome
}}
function zn(e,t){ return Object.keys(ge).filter(O).filter(t=>!Rn(t).includes(t)&&e?.includes(t)===!0) }  // 次要 Chromium
```

即 **Linux 平台 Computer Use 的浏览器控制默认仅暴露 Chrome**，Edge 只在 Windows 出现；次要浏览器（brave/opera/vivaldi 等）从 `ge` 元数据枚举，进「More browsers」disclosure。safari 标注 "Safari extension support is coming soon"。

### 3.4 browserMeta `ge`（来自 app-initial）与 browserFamily 枚举

`P_`（app-initial 里，`ge` 从 `P6t` 映射而来）—— browserFamily 元数据：

| family | backendCompatibilityKey | displayName | shortDisplayName | extensionManagementUrl |
|--------|------------------------|-------------|------------------|------------------------|
| `chrome` | `chrome` | Google Chrome | Chrome | chrome://extensions |
| `edge` | `chrome` | Microsoft Edge | Edge | edge://extensions |
| `brave` | `chrome` | Brave Browser | Brave Browser | brave://extensions |
| `opera` | `chrome` | Opera | Opera | opera://extensions |
| `vivaldi` | `chrome` | Vivaldi | Vivaldi | vivaldi://extensions |

每个都有 linux/macos/windows 的 install 命令、nativeMessagingManifestDirectories、userDataDirectorySegments。**`backendCompatibilityKey:"chrome"` 说明它们都兼容 Chrome 扩展协议（CDP）**。

---

## 4. Connector 集成模型

### 4.1 概念区分（关键）

**Connector ≠ Computer Use ≠ Browser Use。** 三者是三条独立集成线：

| 层 | 作用 | 前端载体 | 数据来源 |
|----|------|----------|----------|
| **Connector** | 接入外部数据/应用（读取+写入外部服务） | 项目 Sources 标签、Connections 设置、自动化建议、代码 review | `connector_*` 连接器 + OAuth |
| **Computer Use** | 控制本机桌面 **App / 浏览器**（点击、输入、导航） | `settings/computer-use` 设置；Any App/Chrome/Messages/Office 行 | native runtime + 浏览器扩展 + nativeMessaging |
| **Browser Use** | 控制 App **内置浏览器(IAB)** | `settings/browser-use` 设置；IAB WebView | 内嵌 Chromium WebView |

### 4.2 Connector 集合（hostname 映射 + appId）

`app-initial-c8dbea294abe.js` hostmap（URL→app 判定，用于 OAuth/自动连接）：

```
box → box.com
dropbox → dropbox.com
figma → figma.com
github → github.com
gmail → mail.google.com
google-calendar → calendar.google.com
google-drive → docs.google.com / drive.google.com / sheets.google.com / slides.google.com
linear → linear.app
notion → app.notion.com / notion.so
salesforce → force.com / salesforce.com
slack → slack.com
```

Google Workspace connector 映射 `uIr`：`gmail`/`google-calendar`/`google-docs`/`google-drive`/`google-sheets`/`google-slides`。

自动化/建议用到的 connector id（`home-ambient-suggestions-content`，代码 review / 收件箱摘要等建议）：

```
connector_box, connector_github, connector_outlook_calendar, connector_outlook_email,
connector_salesforce, connector_sharepoint, connector_teams
```

还有 `connector_gmail`（chatgpt-conversation-page：邮件正文回显）、`connector_slack` 等。`plugin-detail-page` 内的 `Fd` set 列出 Google Workspace 连接器集合。

### 4.3 项目 Sources 标签显示的外部源类型（connectorType）

`app-primary-7eef500906c5.js`：

```
google_drive_file   → "Google Drive file"
google_drive_folder → "Google Drive folder"
slack_channel       → "Slack channel"
linear_project      → "Linear project"
linear_team         → "Linear team"
website             → "Website"
```

这些是「在 ChatGPT 项目中连接的 Source」的标签，与 computer use（控制本机）完全无关。

### 4.4 computer use 专用的 connector：`connector_openai_codex_document_control`

`computer-use-settings.js`（唯一出现处）：

```js
ri = `connector_openai_codex_document_control`
function Ar(e){return e.id===ri}            // 用于过滤 Codex 文档控制插件
pe = g?.find(Ar)?.isEnabled ?? true
me = b && S === ri                          // S = 当前 browser/server 目标 id
```

（字面意义）**Computer Use 用一个特殊的 connector id `connector_openai_codex_document_control` 来标识「Codex 文档控制」插件**，用于在 computer-use 浏览器控制行里判断 Codex 文档控制是否 enabled/当前目标。推断：它代表 Codex 通过 browser 插件对文档（docx 等)的合成/控制能力。

### 4.5 `connections` 设置项其实是「远程控制连接」

`remote-connections-settings-4540aee2fafd.js` 的 i18n 全部是 **SSH / WSL / 远程设备控制**（`remoteConnections.*`、`remoteControlClients.*`、`allowSignedInDevices`、`Control this Mac`、SSH/WSL tab），**不是外部数据 connector**。因此「Connections」设置页属于「远程控制本机/远程机」范畴，与当前任务的 connector（外部数据源）不同义，**标注区分避免混淆**。

---

## 5. Chrome / Browser 插件与扩展

### 5.1 插件注册表（`uTt`，app-initial）

```js
uTt = {
  codexAppTools: {hidden:!0, installWhenMissing:!0, mcpServerName:sTt/*codex_app*/, name:oTt/*codex-app-tools*/},
  sites:         {installWhenMissing:!0, name:u_/*sites*/},
  browser:       {installWhenMissing:!0, name:d_/*browser*/},                 // ← Browser Use 内置浏览器插件
  unifiedComputerUse:{hidden:!0, installWhenMissing:!0, mcpServerName:Hwt/*cua_repl*/, name:$wt/*unified-computer-use*/},
  chromeDev:     {name:Ywt/*chrome-dev*/},
  chromeInternal:{name:Xwt/*chrome-internal*/},
  chrome:        {name:Zwt/*chrome*/},
  computerUse:   {installWhenMissing:!0, installWhenMissingRequiresOptIn:!0, name:Qwt/*computer-use*/},
  messages:      {name:eTt/*messages*/},
  recordAndReplay:{name:tTt/*record-and-replay*/},
  computerHistory:{name:nTt/*computer-history*/},
  latex/notebook/code-review/pullRequests/deepResearch/userWriting/visualize: ...
}
```

插件 id 常量（见上文 `Xwt`...）：`chrome`/`chrome-dev`/`chrome-internal`/`computer-use`/`unified-computer-use`/`browser`/`sites` 等。

**Auto-install 门控**（`dTt` Map，对应 statsig/feature flag）：

```
sites      → SITE_CREATOR_BUNDLED_PLUGIN_AUTO_INSTALL_DISABLED
browser    → BROWSER_USE_BUNDLED_PLUGIN_AUTO_INSTALL_DISABLED
computer-use → COMPUTER_USE_BUNDLED_PLUGIN_AUTO_INSTALL_DISABLED
```

### 5.2 `browser` 插件（Browser Use 内置浏览器）vs `unified-computer-use`

- **`browser` 插件**：`name:"browser"`，即「控制内置浏览器」的 IAB 插件，`installWhenMissing:true`。browser-use 设置页里的「Browser 插件控制行」就是它（`description: "Let ChatGPT control the built-in browser"`）。
- **`unified-computer-use` 插件**：`hidden:true`，**MCP server = `cua_repl`**，`installWhenMissing:true`。**这就是「统一 computer use 插件（browser + computer 两个 surface）」**。

### 5.3 `cua_repl` = 统一 browser+computer 的 MCP runtime（核心证据）

`app-initial-c8dbea294abe.js`（系统提示词构造）：

```js
function s_(e){ return e===`node_repl` || e===`cua_repl` }
var Hwt; Hwt = `cua_repl`

a = t===`cua_repl`
  ? `Use cua_repl for Chrome control; no separate browser skill or runtime is needed. First call cua.listBrowsers(),
     then cua.getBrowser({ id }) for the browser whose metadata.extensionInstanceId is ${...extensionInstanceId}.
     Read its returned documentation and use that browser ID for all tab operations. Claim the selected page tab
     before opening new tabs so they stay in Chrome window (${...preferredWindowId}). If this instance is unavailable,
     report that and stop; do not switch browsers or runtimes.`
  : (r==null
       ? `Chrome navigation and page control are unavailable in this session. getTabContext remains available for reading
          page content. If the request needs browser control, explain that the user must enable or update the Codex Chrome
          plugin in the desktop app and reopen the side panel. Do not run ad hoc node_repl browser-client path discovery or
          switch to another browser.`
       : `The installed Codex Chrome browser runtime/plugin can do more expressive browser queries, navigation, and page control,
          but do not use it when getTabContext is enough...`);
```

解读：
- `cua_repl` 用 `cua.listBrowsers()` / `cua.getBrowser({id})`，**统一了 browser 控制语言**，明确说"不需要单独的 browser skill/runtime"。
- 旧路径 `node_repl`（`setupBrowserRuntime`/`agent.browsers.get("extension")`）是**分离的 browser runtime**（BROWSER browser client），现在 cua_repl 已把它统一进 Computer Use Agent。
- `r`（browserClientPath）非空时走 node_repl 的独立 browser client；`cua_repl` 则直接走计算机控制。
- Chrome 侧还依赖 `extensionInstanceId` / `preferredWindowId` —— 即真实 Chrome 是通过 **Codex Chrome 扩展**接入的(§5.4)。

### 5.4 Chrome 扩展（真实浏览器接入浏览器扩展）

扩展渠道 `M_`（按 browserFamily→channel→distributions），`chrome`/`edge` 的 prod 走 **Chrome Web Store** 或 **Microsoft Edge Add-ons**：

```
uDt（codex beta）：  distribution:chrome-web-store, extensionIds:[lfkehkpjohcoelkpembgemeipeppanef],
                    storeUrl: https://chromewebstore.google.com/detail/codex/lfkehkpjohcoelkpembgemeipeppanef, releaseChannel:beta

dDt（chatgpt stable）：distribution:chrome-web-store, extensionIds:[hehggadaopoacecdllhhajmbjkdcmajg],
                    storeUrl: https://chromewebstore.google.com/detail/chatgpt/hehggadaopoacecdllhhajmbjkdcmajg, releaseChannel:stable

fDt（edge）：      distribution:microsoft-edge-add-ons, extensionIds:[odlomjlbamekndcpllcnffbgeohgkmjh],
                    storeUrl: https://microsoftedge.microsoft.com/addons/detail/odlomjlbamekndcpllcnffbgeohgkmjh, releaseChannel:stable

chrome prod：{managed-self-hosted (stable, signingIdentity:stable), dDt(ChatGPT stable)}
chrome dev： {local-development, managed-self-hosted(dev), uDt(Codex beta)}
edge prod：  {managed-self-hosted(stable), fDt(Edge), dDt(ChatGPT)}
```

`mDt`/`hDt` 选择函数：取 `distribution===chrome-web-store || microsoft-edge-add-ons` 且有 extensionId + storeUrl 的那个。

i18n（`plugins.browserExtension.*`）：

```
plugins.browserExtension.name          → "ChatGPT browser extension"
plugins.browserExtension.chrome.name   → "ChatGPT for Chrome"
plugins.browserExtension.edge.name     → "ChatGPT for Edge"
plugins.browserExtension.installed     → "Browser extension installed"
plugins.browserExtension.notInstalled  → "Browser extension not installed"
plugins.browserExtension.loading       → "Use the browser extension for additional control"
plugins.browserExtension.description   → (description string)
```

### 5.5 Browser Use 内置浏览器的嵌入地址（IAB WebView）

`hidden-browser-use-webview-host-...js` / `webview-*.js`：

```js
hostKind:`hidden-browser-use`
l.url  → `about:blank` 默认 / l.url
```

内置浏览器标签通过 `tabType===WEB` 判定（`l.tabType!==r.WEB→return null`）。`browser-use-origin-state-queries` 也区分 `iab`/`extension`/`cdp` 三种后端。

### 5.6 Chrome 插件设置/安装 UI（computer use 浏览器行）

`computer-use-settings.js` 里每个 browserFamily 行的 button：`Install`（installExtension）/ `Manage` / `Reinstall extension` / `Remove extension`；状态徽标 `Installed`/`Not installed`。用 `chromiumBrowser.openUrl({browserFamily, url})` 打开扩展页（storeUrl），失败回退 `openTarget:external-browser`。

---

## 6. Unified Computer Use（前端体现小结）

- **插件条目**：`unifiedComputerUse`（`hidden:true, installWhenMissing:true, mcpServerName:cua_repl, name:unified-computer-use`）。它是 `uTt` 里唯一同时带 `hidden` + `mcpServerName` 的插件（browser 仅 name，unifiedComputerUse 显式 mcpServerName）。
- **MCP server 名**：`cua_repl`。`Kwt` 判定：`Object.values(uTt).some(t=>`mcpServerName`in t && t.hidden && t.mcpServerName===e)` → 表明 unifiedComputerUse 是**隐藏的 MCP 插件**。
- **回调函数**：`Gwt(e,t)= c_(t) && qwt(e)?.hidden===true`，`qwt(e)=Object.values(uTt).find(({name})=>name===e)`；结合 `c_ = t===l_(openai-bundled)`。即「openai-bundled + hidden + name===unified-computer-use」为真时走特定隐藏插件逻辑。
- **两个 surface 的并集**：`unified-computer-use` 的 `cua_repl` 系统提示同时覆盖 `cua.listBrowsers()`（browser surface）和 computer 控制（computer surface），`toolSurface` 里的 `kind browserUse|computerUse` 共用一份元数据。**结论：统一 computer use 前端 = 把「内置/外置浏览器控制」与「桌面 App 控制」并进同一个 Computer Use Agent（cua_repl），而 Settings 里仍拆成 browser-use / computer-use 两页呈现**。
- 交互层上，会话内一次工具调用既可能是 `kind=browserUse`（含 backend=iab 内置，或 chrome 外置）也可能是 `kind=computerUse`（appId/displayName）。
- 关联的独立 chunk：`computer-use-native-app-metadata`（按 bundle-id/displayName 查 native apps）、`computer-use-plugin-icon`。**没有发现名为 `unified-computer-use-*.js` 的独立 chunk**——unified 是 app-initial 内的注册表+prompt 逻辑，不单独打包。**标注为「推断」：unified 前端主要在 app-initial 的注册表与 cua_repl prompt 中，无独立设置页**。

---

## 7. i18n 字符串清单

### 7.1 browser-use-settings-1434114c4212.js（156 条，精选）

**页头/控制行**：
- `settings.browserUse.subtitle` — "Manage the built-in browser. Browser extensions can be set up in <computerUseSettingsLink>computer use settings</computerUseSettingsLink>"
- `settings.browserUse.control.description` — "Let ChatGPT control the built-in browser"
- `settings.browserUse.install.empty` — "In-app browser plugin unavailable"
- `settings.browserUse.install.button` — "Install"

**Section 标题**：
- `settings.browserUse.general.title` — "General"
- `settings.browserUse.autofillAndPasswords.title` — "Autofill and passwords"
- `settings.browserUse.extensions.title` — "Extensions"
- `settings.browserUse.downloads.title` — "Downloads"
- `settings.browserUse.policyAuthoring.subtitle` — "Manage your Browser Use preferences and site access."

**行为设置**：
- `settings.browserUse.showFullUrl` — "Show full URL" / desc "Include the path, query, and fragment in the address bar"
- `settings.browserUse.localUrlOpenTarget` — "Local URL open destination" / "(Chos)/Default browser"
- `settings.general.openLinkInTargetPreference` — "Web URL and link open destination"
- `settings.browserUse.browser.annotationScreenshots.label` — "Annotation screenshots" / always / only-on-drag / desc "…increase plan usage"

**扩展/密码/联系**：
- `settings.browserUse.extensions.description` — "Install, remove, and configure browser extensions"
- `settings.browserUse.extensions.label` — "Extension manager"
- `settings.browserUse.passwordManager` — "Add, delete, and edit saved passwords"
- `settings.browserUse.contactInfo` — "Add, delete, and edit saved addresses, phone numbers, and email addresses"

**历史/下载管理入口**：
- `settings.browserUse.history.label` — "Browsing history"
- `settings.browserUse.downloads.history.label` — "Download history"
- `settings.browserUse.siteSettings` — "Site settings"（权限：camera/mic/location/notifications/popups/javascript/cookies/clipboard/usb/sound/handlers 等面包屑）

**清除数据**：
- `settings.browserUse.clearBrowsingData.error`/`policyError` — "Unable to clear browsing data[: {error}]"
- `settings.browserUse.browser.*` — Cookies / Site data / Cache / Downloads / History 各 label + `clearXxx` + `xxxCleared` toast + `xxxError`

**下载详情**（browser-use-settings & visibility）：`downloads.popover.*`、`downloads.status.*`（paused/failed/canceled/missingFile 等）。

### 7.2 browser-use-settings-visibility-cc8557dcc020.js（60 条，清除浏览数据对话框）

- `settings.browserUse.clearBrowsingData.*` — title/cancel/confirm("Delete data")/accessibleTitle/policyError/error
- category：`history`/`siteData`→"Cookies and site data"/`cache`/`downloads`/`formData`→"Autofill form data"/`siteSettings`
- time-range：`lastHour`/`lastDay`/`lastWeek`/`lastMonth`/`allTime`
- summary：`historySummary*`/`siteDataSummary`/`cacheSummary`/`downloadsSummary`/`formDataSummary`/`siteSettingsSummary`
- `downloads.popover.*` — showInFinder/FileExplorer/FileManager、openDownload、copyAddress/copyPath、status.*、remaining*、action.*Error

### 7.3 computer-use-settings-704f9a61c3bf.js（99 条，精选）

**页头**：
- `settings.computerUse.subtitle` — "Manage how ChatGPT uses other applications on your computer"
- `settings.computerUse.breadcrumb.computerUse` — "Computer use"
- `settings.computerUse.install.title` — "Control"
- `settings.computerUse.manage` — "Manage"

**控制行**：
- `settings.computerUse.anyApp.title` — "Any App" / desc "Let ChatGPT control apps on your computer"
- `settings.computerUse.chrome.pluginTitle` — "Google Chrome"
- `settings.computerUse.edge.pluginTitle` — "Microsoft Edge"
- `settings.computerUse.safari.pluginTitle` — "Safari" / desc "Safari extension support is coming soon"
- `settings.computerUse.messages.pluginTitle` — "Messages" / desc "Let ChatGPT read and send messages"
- `settings.computerUse.microsoftExcel.pluginTitle`/`microsoftPowerPoint.pluginTitle` — "Microsoft Excel"/"Microsoft PowerPoint"

**浏览器扩展控制**：
- `settings.computerUse.browser.installPluginDescription` — "Install the {pluginName} plugin to enable browser control"
- `settings.computerUse.browser.installExtension` — "Install"
- `settings.computerUse.browser.manage`/`reinstallExtension`/`removeExtension`
- `settings.computerUse.browser.toggleAria` — "Toggle the @{browserName} browser reference"
- `settings.computerUse.browser.disableTooltip`/`enableTooltip` — "Hide/Show @{browserName} in the composer"
- `settings.computerUse.chrome.installed`/`notInstalled` — "Installed"/"Not installed"
- `settings.computerUse.moreBrowsers.title`/`description` — "More browsers"/"Set up extensions for more browsers"

**Messages 权限**：`settings.computerUse.messages.readAccess.*`、`allowedChats.*`、`chatSearch.*`、`removePermissionDialog.*`

**Locked use / Always-allowed apps**：`backgroundAuth.*`、`allowedApps.*`

### 7.4 browser 扩展插件（app-initial，`plugins.browserExtension.*`）

```
plugins.browserExtension.name          — "ChatGPT browser extension"
plugins.browserExtension.chrome.name   — "ChatGPT for Chrome"
plugins.browserExtension.edge.name     — "ChatGPT for Edge"
plugins.browserExtension.installed     — "Browser extension installed"
plugins.browserExtension.notInstalled  — "Browser extension not installed"
plugins.browserExtension.loading       — "Use the browser extension for additional control"
```

### 7.5 Settings 导航 label（app-initial）

```
settings.nav.browser-use    — "Browser"       (in-app browser settings)
settings.nav.computer-use   — "Computer use"  (computer use settings)
```

### 7.6 connector 源类型（app-primary，`chatgptConversations.sidebar.projectSettings.connectorType*`）

```
connectorTypeGoogleDriveFile   — "Google Drive file"
connectorTypeGoogleDriveFolder — "Google Drive folder"
connectorTypeSlackChannel      — "Slack channel"
connectorTypeLinearProject     — "Linear project"
connectorTypeLinearTeam        — "Linear team"
connectorTypeWebsite           — "Website"
```

---

## 8. 不清晰/不确定项（明确标注）

1. **`connector_openai_codex_document_control` 的具体功能**：只在 `computer-use-settings.js` 里作为 `ri` 常量，用于 browser/server 目标判断（`Ar(e){e.id===ri}`、`me=b&&S===ri`）。它如何映射到底层「Codex 文档控制」未在 assets 中展开，**功能语义为推断**。
2. **`unified-computer-use` 是否有独立设置页**：未发现 `unified-computer-use-*.js` chunk；逻辑内联在 app-initial 的 `uTt` 注册表 + `cua_repl` prompt。**推断：无独立设置页，是隐藏 MCP 插件**。
3. **`chrome-dev` / `chrome-internal` 插件的实际面向**：注册表里有（`name:chrome-dev/chrome-internal`），与之对应 `M_.chrome.dev/internal` 渠道，主要用于 Chrome 扩展的 dev/beta 内部 self-hosted 发行；界面中未见独立控制行，**标注为推断：内部/测试渠道**。
4. **Linux 下 Computer Use 具体形态**：settings 路由、`Rn`(linux→[chrome])、browserFamily 元数据（含 linux 命令路径）均存在；但「Any App 控制」与「native 权限」在 Linux 上的实际运行时能力属**后端**，前端仅决定 UI 显示（`available`/`allowed`/`isInstalled` 标志）。前端不能证实 Linux 实际可用性（有 `chrome-dev`、`chrome-internal` 等平台无关注册，但 Linux main 通道只有 Chrome）。**标注为：前端可见，运行时能力未验证**。
5. **`computer-use/messages` 在 Linux 的意义**：该子路由存在于路由表，但 Messages 插件的权限文案均为 macOS 语义（`usage of your Mac when it's locked`、`macOS permissions`、`Performance`）。在 Linux 上大概率不可用/降级，**推断**。
6. **`webview-ace7dc9c5d1c.js` 内嵌浏览器**：判定 `tabType===WEB`、`hostKind==="hidden-browser-use"`，具体渲染由 webview 相关 runtime 处理，未展开。
7. **外部 connector（slack/notion/linear/figma/github 等）是否与 computer use 在 runtime 联合**：源代码层面二者在 `toolSurface` 中分开（`browserUse`/`computerUse`），而 connector 通过 `connector_*` id 进入项目/建议/代码 review；`cua_repl` prompt 里提到「if Google Drive connector is present, prefer connector over browser」——说明 connector 与 browser use 在**某一个工具面（Google Workspace 文档）上有协作关系**，但 connector 本身不归属 computer use 插件索引。**此协作语义为代码注释级证据，非独立 UI**。

---

## 9. 文件索引

| 证据文件 | 作用 |
|----------|------|
| `browser-use-settings-1434114c4212.js` | Browser Use(Settings)主页面 + i18n |
| `browser-use-settings-visibility-cc8557dcc020.js` | 清除浏览数据对话框 + 下载 popover |
| `browser-use-origin-state-queries-365e182fe48f.js` | Browser origin/权限策略 keyPath |
| `hidden-browser-use-webview-host-b9b0725857a6.js` | 内置浏览器 WebView host(`hidden-browser-use`) |
| `computer-use-settings-704f9a61c3bf.js` | Computer Use(Settings)主页面 + connector id |
| `computer-use-native-app-metadata-41012c2b5b48.js` | native app 元数据查询 |
| `app-initial-c8dbea294abe.js` | 插件注册表 `uTt`、`cua_repl` prompt、settings 路由/导航、浏览器 family 元数据 `P_`、扩展渠道 `M_`、connector hostmap、`toolSurface` schema |
| `app-primary-7eef500906c5.js` | connectorType label、settings 路由 |
| `plugin-detail-page-81f97858a340.js` | 连接器(Fd set)与插件详情页 |
| `home-ambient-suggestions-content-*.js` | 外部 connector id (github/outlook/salesforce/box/teams...) |
| `chatgpt-conversation-page-5b0a2e822989.js` | `connector_gmail` 映射 |
| `pca-connector-action-*.js` / `pca-connector-eligibility-*.js` | connector 链接 beacon / 合格性 |
| `remote-connections-settings-4540aee2fafd.js` | Connections(=远程控制/SSH/WSL)，非数据 connector |
