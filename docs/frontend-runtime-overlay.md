# OpenAI ChatGPT Desktop for Linux (chatgpt 26.901.31953) — Computer Use「运行时 overlay / 外观 UI」前端取证报告

> 逆向分析。素材：`/home/huashen/work/chatgpt-deb/app/webview/assets/` 下的 minified JS + CSS（从 app.asar 解包）。
> 全部为**只读 grep 取证**（`grep -oE` 等），未修改任何文件。
> 标注「**推断**」的为基于证据的合理推导；未标注的均来自代码字面证据。
> 涉及文件均为单行 minified，故给出「文件名 + 提取到的字面片段」作为出处。

---

## 0. 结论速览（先说重点）

1. **这个版本没有任何在 webview 前端（React）内渲染的 "Computer Use 运行时视觉 overlay" 组件**（没有鼠标指针高亮、点击涟漪、全屏暂停遮罩、屏幕共享边框等 DOM 结构）。
2. **Computer Use 的实时画面（控制电脑时看到的画面）由 Electron 桌面原生服务渲染**：`remoteHostedPIP`（暴露在桌面 services 里，webview 内代码用 `QX.remoteHostedPIP` 访问）。它提供 `getState / showTask / hideTask / hideForAllActiveTasks`，以**原生画中画（PiP）浮窗**的形式叠加在桌面上。webview 侧只调用这个桥来**显示/隐藏**任务流，自身不画 overlay。
3. 任务列出的那些图标——`screen-share` / `screen-share-off` / `mouse-pointer` / `mouse-pointer-2` / `mouse-pointer-click` / `mouse-pointer-ban` / `square-mouse-pointer` / `square-dashed-mouse-pointer` / `circle-pause` / `monitor-pause` / `computer`——**全部是 Lucide 图标库的自动生成条目**，只被「图标注册表」`index-0YairKH_-ff279dd3ed67.js` 和 `register-BqqwIOLc-f2c56f587733.js` 引用。**当前 bundle 中没有任何 chunk 以 JSX 方式引用它们**（见 §4 的证据链），因此它们**没有**被用于构建 computer use overlay 组件。
4. `connect-screen`（`ConnectScreenFill-b9177a285c1f.js`）只是一个**填充风格的图标名**（icon-name，出现在 Lucide 图标名列表里），**不是**「连接屏幕」状态 UI；`FullscreenControl` 是 **mapbox-gl 的控件**，与 computer use 无关。
5. Computer Use 运行时涉及的 webview UI 只有三类：
   - **thread summary side panel 里「Computer Use」Section**（`computer-use-pip`），控制 PiP 浮窗的显示/隐藏（show / hide / hide for this task / hide for all active tasks）。
   - **Computer Use 设置页**（`computer-use-settings-704f9a61c3bf.js`），管理「让 ChatGPT 控制哪些 App / 浏览器 / Message」，核心文案是 `Let ChatGPT control apps on your computer`。
   - **conversation 顶栏/菜单**（`header-4fdcee980c6b.js`）里的「{browser} computer use settings」入口，以及 Composer 提示（`controller-884d1bc2bd5c.js` 的 `composerTips.computerUse` → 「Control apps on your computer using Computer Use.」）。

---

## 1. Computer Use 运行时视觉层架构（ASCII 树）

```
┌───────────────────────────────────────────────────────────────────────────────┐
│                         桌面操作系统 (Linux, Electron)                          │
│                                                                               │
│   ┌────────────────────────────────────────────────────────────────────────┐ │
│   │   Computer Use 实时画面  =  原生 PiP / remoteHostedPIP 浮窗            │ │
│   │   （由 Electron 原生服务渲染，属于 QX.remoteHostedPIP 桥）             │ │
│   │   · getState() → {activeTaskIds[], revision, globalHidden,              │ │
│   │                    taskVisibilities{}}                                 │ │
│   │   · showTask(taskId) / hideTask(taskId) / hideForAllActiveTasks()      │ │
│   │   · 状态变化事件 `remote-hosted-pip-task-state-changed`                │ │
│   │   · 锚点计算：remote-hosted-pip-anchor-bridge（host rect 放置浮窗）    │ │
│   └────────────────────────────────────────────────────────────────────────┘ │
│                     ▲  ▲  通过桌面桥控 show/hide                              │
│                     │  └───────────────────────────────┐                      │
│   ┌─────────────────┼──────────────────────────────────┼───────────────┐     │
│   │          ChatGPT 主窗口 —— WebView (React)           │               │     │
│   │                                                      │               │     │
│   │   · conversation thread / summary side panel        │               │     │
│   │     └─ Section sectionKey="computer-use-pip"        │               │     │
│   │          ├─ 标题 "Computer Use" (remoteHostedPip.computerUse)       │     │
│   │          ├─ "Picture in Picture" 开关项                            │     │
│   │          └─ Show/Hide 菜单                                         │     │
│   │               ├─ Show Picture in Picture → QX.remoteHostedPIP      │     │
│   │               │                              .showTask(taskId)     │     │
│   │               ├─ Hide for this task                               │     │
│   │               └─ Hide for all active tasks                        │     │
│   │                                                      │               │     │
│   │   · 该 webview 内【没有】任何鼠标指针高亮 / 点击涟漪 /             │     │
│   │     全屏暂停遮罩 / 屏幕分享边框 的 React DOM 组件                  │     │
│   └────────────────────────────────────────────────────────────────────┘     │
│                                                                               │
│   （鼠标指针、点击高亮等运行时视觉 —— 由被控制端的 native/扩展层呈现，           │
│      不是 webview 里的 DOM；本 bundle 无可证证据）                             │
└───────────────────────────────────────────────────────────────────────────────┘
```

**结论**：不存在一个「webview 内叠加的 Computer Use overlay 层」。运行时画面在原生层，webview 只做「是否显示」的控制开关。

---

## 2. `remoteHostedPIP` 原生桥（Computer Use 运行时画面的控制入口）

### 2.1 桥对象来源

`app-initial-c8dbea294abe.js`：

```js
QX = await jSa.services, QX.statsig != null && ..., QX.clientCoordination != null && ...,
  QX.terminal != null && ..., QX.devboxService ...
```

`QX.remoteHostedPIP` 是桌面 services 集合 `QX` 的一个 service。

### 2.2 桥方法（webview 侧使用，全部 `?.` 防御式调用）

`app-initial-c8dbea294abe.js`（提取到的方法名）：

```js
QX.remoteHostedPIP?.getState()                       // → {activeTaskIds[], revision, globalHidden, taskVisibilities{}}
QX.remoteHostedPIP?.hideTask(t)                      // 隐藏某个 task 的 PiP
QX.remoteHostedPIP?.hideForAllActiveTasks()
QX.remoteHostedPIP?.showTask(t)                      // 显示某个 task 的 PiP
QX.remoteHostedPIP?.importLegacyHiddenTaskIds(n)     // 迁移旧隐藏 task id
```

### 2.3 状态缓存（React Query）

`app-initial-c8dbea294abe.js`：

```js
kEs = pb(Q, () => ({
  enabled: QX.remoteHostedPIP != null,
  queryKey: [`remote-hosted-pip-task-state`],
  queryFn: async () => await QX.remoteHostedPIP?.getState() ?? {activeTaskIds:[], revision:0, globalHidden:!0, taskVisibilities:{}},
  staleTime: DD.INFINITE,
}))
```

- 监听事件：`remote-hosted-pip-task-state-changed`（`z(`...`, r, i)` 形式）
- 其他事件/缓存键：`remote-hosted-pip-active-thread-changed`、`remote-hosted-pip-hidden-thread-ids`
- active 判断：`...data?.activeTaskIds.includes(e) ?? !1`

### 2.4 锚点浮窗（浮窗放在哪）

`remote-hosted-pip-anchor-bridge-4f45838df2bd.js` 导出 `O / k / g / R`（函数），计算 `homeSurfaceRect / hostRect / hostId / obstacleRects / anchorRect`，含四种对齐（top-left/top-right/bottom-left/bottom-right）和避让障碍逻辑。它负责把原生 PiP 浮窗锚定到 thread / host 相关的位置。**由 native 侧消费**，webview 只提供计算输入。

---

## 3. Computer Use 运行时 webview UI（真实存在的）

### 3.1 thread summary side panel —— Computer Use Section（核心运行时控件）

文件：`local-conversation-thread-62de5ea343b7.js`

```js
(0,pw.jsx)(Q.Section, {
  sectionKey: `computer-use-pip`,
  title: m,   // "Computer Use"
  children: (0,pw.jsxs)(Q.Item, {
    children: [ h, g,
      (0,pw.jsx)(Q.ItemMeta, { variant:`text`, children: c ? hide菜单 : show按钮 })
    ]
  })
})
```

- **Section key**：`computer-use-pip`
- **标题**：`codex.localConversation.remoteHostedPip.computerUse` → `Computer Use`
- **开关项**：`remoteHostedPip.pictureInPicture` → `Picture in Picture`
- 触发按钮 className（show 态）：`cursor-interaction rounded-md border-0 bg-transparent p-0 text-tertiary select-none hover:text-default focus-visible:outline-2 focus-visible:outline-offset-0 focus-visible:outline-...`（Codex 通用小按钮样式）
- **菜单项**：
  - `Show Picture in Picture` / `Show` → 调 `OE s`→`QX.remoteHostedPIP?.showTask(t)`
  - `Hide Picture in Picture` / `Hide` → `EE s`→`QX.remoteHostedPIP?.hideTask(t)`
  - `Hide for this task` → `Hide for all active tasks` → `DE s`→`QX.remoteHostedPIP?.hideForAllActiveTasks()`

**i18n 完整名单**（`codex.localConversation.remoteHostedPip.*`）：

| id | defaultMessage | 说明 |
|---|---|---|
| `.computerUse` | Computer Use | Section 标题 |
| `.pictureInPicture` | Picture in Picture | PiP 可见性开关 label |
| `.show` | Show | Show 按钮 label |
| `.showPictureInPicture` | Show Picture in Picture | Show 按钮 aria-label |
| `.hide` | Hide | Hide 按钮 label |
| `.hidePictureInPicture` | Hide Picture in Picture | Hide 按钮 aria-label |
| `.hideForTask` | Hide for this task | 菜单项 |
| `.hideForAllActiveTasks` | Hide for all active tasks | 菜单项 |

### 3.2 Computer Use 设置页（控制哪些 App）

文件：`computer-use-settings-704f9a61c3bf.js`

- `settings.computerUse.install.title` → `Control`
- `settings.computerUse.anyApp.title` → `Any App`；`.anyApp.description` → `Let ChatGPT control apps on your computer`
- 逐 App 行：`microsoftExcel` / `microsoftPowerPoint` / `chrome` / `edge` / `safari` / `messages`（如 `Toggle Microsoft Excel live control`、`Let ChatGPT use Microsoft Excel add-in for additional control`）
- 插件安装状态行：`settings.computerUse.browser.installPluginDescription` → `Install the {pluginName} plugin to enable browser control`
- 有 `computerImageDataUrl` / `lockImageDataUrl` 两个 `<img>`：`className="absolute top-0 left-1 h-[53px] w-[53px] object-contain"` 与 `className="absolute right-0 bottom-0 h-[33px] w-[27px] object-contain"`（电脑/锁 角标，装饰图，非 overlay）
- native metadata：`computer-use-native-app-metadata-41012c2b5b48.js`（`native-desktop-app-by-bundle-id` / `native-desktop-apps` query，取 `computer-use-tool-row-display-name`）

### 3.3 Composer / 顶栏入口

`controller-884d1bc2bd5c.js`：

```js
computerUseContent: { id:`composerTips.computerUse.content`,
  defaultMessage:`Control apps on your computer using Computer Use.`,
  description:`Tip explaining Computer Use` }
setUp: { id:`composerTips.computerUse.action`, defaultMessage:`Set up`, description:`Button that opens Computer Use settings` }
// id `computer-use`, path `/settings/computer-use`, isEligible e=>H(e,`computer-use`)
```

`header-4fdcee980c6b.js`：

```js
{ id:`header.browserComputerUseSettings`, defaultMessage:`{browser} computer use settings`,
  description:`Menu item label for opening browser computer use settings ...` }
```

---

## 4. 任务指定图标组件的取证结果（重要：它们不是 overlay 组件）

### 4.1 结论

这些全部是 **Lucide 图标库自动生成的图标条目**（`createLucideIcon`），当前 bundle 中**无任何 chunk 以 JSX 方式引用它们来构建 UI**。

### 4.2 证据链

1. 图标定义文件（核心，含 `createLucideIcon` 调用）：
   - `screen-share-CUo5dAGx-d64dd643f8e5.js` → `ScreenShare`
   - `screen-share-off-BeSIsqs5-dc00f2a30ab7.js` → `ScreenShareOff`
   - `mouse-pointer-DWEFpgO7-bf4e25651134.js` → `MousePointer`
   - `mouse-pointer-2-DPxYRJTg-95012eb38169.js` → `MousePointer2`
   - `mouse-pointer-click-Czj7IqNg-1e8965e76100.js` → `MousePointerClick`
   - `mouse-pointer-ban-PPdPb7p4-76bb57b28777.js` → `MousePointerBan`
   - `square-mouse-pointer-BwInUBE8-657c7bb14212.js` → `SquareMousePointer`
   - `square-dashed-mouse-pointer-CUKnUPQC-d200794c4f6f.js` → `SquareDashedMousePointer`
   - `circle-pause-Du_o7xgt-9791d643f4b2.js` → `CirclePause`
   - `monitor-pause-Dr3zPosE-efc7ae97b036.js` → `MonitorPause`
   - `computer-gInmNzjb-6bd584bd0ab1.js` → `Computer`
   - `ConnectScreenFill-b9177a285c1f.js` → 填充风格自定义图标（viewBox 0 0 20 20，fill=currentColor，桌面/连接图形）

2. 谁引用这些图标文件：
   - `index-0YairKH_-ff279dd3ed67.js`（**完整图标注册表**，聚合所有 Lucide 图标）
   - `register-BqqwIOLc-f2c56f587733.js`（图标注册）
   - 图标自身的封装 layer（如 `screen-share-CUo5dAGx-53830c71aed0.js` 只是 `export default`）
   - `square-mouse-pointer` 另被 `inspect-BNwPD_mq-2ade151b1e31.js` 引用（`inspect` 是一个图标别名封装，非 UI）

3. **JSX 使用检测（空结果）**：在 `*.js` 中搜索 `jsx(...ScreenShare/MousePointer/CirclePause/MonitorPause/Computer...)` 等组件名**均无命中**；在 `app-primary` / `app-initial` 中搜索裸组件名（`ScreenShare` / `MousePointer2` / `CirclePause` / `MonitorPause` / `Computer`）作为 JSX 元素**也无命中**。

=> 这些图标在**当前产物中仅作为图标库资源存在**，未被任何 UI 组件实际使用。它们是「潜在可用的图标」，不是「正在渲染的 overlay」。

### 4.3 Lucide 图标 DOM 结构 / className / 尺寸（若被使用时）

`createLucideIcon-BrIFp4GW-b0f67306ab2c.js`：

```js
o = { xmlns:`http://www.w3.org/2000/svg`, width:24, height:24, viewBox:`0 0 24 24`,
      fill:`none`, stroke:`currentColor`, strokeWidth:2, strokeLinecap:`round`, strokeLinejoin:`round` }

const Icon = ({color=`currentColor`, size=24, strokeWidth=2, absoluteStrokeWidth, className=``, children, iconNode, ...props}) =>
  <svg ref {...o} width={size} height={size} stroke={color}
       strokeWidth={absoluteStrokeWidth ? Number(strokeWidth)*24/Number(size) : strokeWidth}
       className={a(`lucide`, className)} {...props}>
    {iconNode.map(...)}
  </svg>

// 每个图标再包一层，className = `lucide lucide-<kebab-case(name)>`
```

**DOM 模板**（被使用时）：

```html
<svg class="lucide lucide-screen-share" xmlns="http://www.w3.org/2000/svg"
     width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor"
     stroke-width="2" stroke-linecap="round" stroke-linejoin="round">
  <path d="M13 3H4a2 2 0 0 0-2 2v10a2 2 0 0 0 2 2h16a2 2 0 0 0 2-2v-3"/>
  <path d="M8 21h8"/><path d="M12 17v4"/><path d="m17 8 5-5"/><path d="M17 3h5v5"/>
</svg>
```

- **尺寸**：默认 `24×24`，可用 `size` prop 覆盖；常配合 `className="icon-xs / icon-sm / icon-2xs"`（ChatGPT 图标尺寸 token）。
- **定位属性**：图标本身**无 z-index / absolute**——它们是内联 SVG 内容元素，定位由外层容器（如按钮/菜单项）控制。**bundle 中未发现任何 `absolute` + `z-[...]` 把这些图标包裹成 overlay 层的代码**。

### 4.4 各图标 SVG path（Lucide 官方图形）

| 组件 | Lucide 名 | 图形内容（iconNode） | 推断用途 |
|---|---|---|---|
| `mouse-pointer` | MousePointer | 箭头光标（指针多边形 + 对角延长线 `M12.586 12.586 19 19`） | 通用光标 |
| `mouse-pointer-2` | MousePointer2 | 简笔箭头光标 | 通用光标（更简化） |
| `mouse-pointer-click` | MousePointerClick | 箭头 + 四周放射短线条 | 点击/交互提示图标 |
| `mouse-pointer-ban` | MousePointerBan | 箭头斜线贯穿 + 圆环 ×（`m11.8 11.8 8.4 8.4` 为取消斜线） | 「禁止/无指针」提示 |
| `square-mouse-pointer` | SquareMousePointer | 方框 + 内部箭头光标 | 选择区域光标（实心框） |
| `square-dashed-mouse-pointer` | SquareDashedMousePointer | 虚线方框 + 内部箭头光标（多段 `M5 3a2...` 虚线） | 拖拽选择/框选区域光标（虚线） |
| `screen-share` | ScreenShare | 显示器 + 底座 + 右上角 `m17 8 5-5` 对角线（分离/外发提示） | 分享屏幕（开始） |
| `screen-share-off` | ScreenShareOff | 显示器 + 底座 + 右上角 `m22 3-5 5` / `m17 3 5 5` 叉号对 | 分享屏幕（停止/已关） |
| `circle-pause` | CirclePause | 圆环 + 两条竖线暂停 | 暂停（圆形按钮） |
| `monitor-pause` | MonitorPause | 显示器 + 内部两条竖线 + 底座 | 暂停屏幕/监控 |
| `computer` | Computer | 上小屏 + 下大屏（`rect`×2 + 点状 `M6 18h2` / `M12 18h6`） | 电脑设备泛指 |
| `connect-screen` | ConnectScreenFill | 填充风格（20×20 viewBox，桌面 + 连接点）| 「连接界面/设备」图标（填充样式） |

**说明**：`screen-share`/`monitor-pause`/`mouse-pointer-click`/`square-dashed-mouse-pointer` 等命名与「computer use 运行时视觉」高度相关，但它们仅存在于 Lucide 库，未被本版本 UI 引用。（若父脚本在其他 bundle 或 native 源码中找到它们被实际使用，则另有 layers。）

---

## 5. 相关 i18n / CSS class 清单

### 5.1 Computer Use 运行时（PiP side panel）i18n

文件：`local-conversation-thread-62de5ea343b7.js`，命名空间 `codex.localConversation.remoteHostedPip.*`（见 §3.1 表）。

### 5.2 Computer Use 设置 i18n

文件：`computer-use-settings-704f9a61c3bf.js`，命名空间 `settings.computerUse.*`（`install.title`=`Control`、`anyApp.description`=`Let ChatGPT control apps on your computer`、`microsoftExcel.*`、`microsoftPowerPoint.*`、`browser.*`、`messages.*`、`allowedApps.removeAriaLabel`、`alwaysAllowedApps.*` 等）。

### 5.3 Composer / header i18n

- `composerTips.computerUse.content` = `Control apps on your computer using Computer Use.`
- `composerTips.computerUse.action` = `Set up`
- `header.browserComputerUseSettings` = `{browser} computer use settings`

### 5.4 Hermes connector 连接状态（可能与 computer use connector 相关）

文件：`app-primary-7eef500906c5.js`，命名空间 `widgets.hermes.permission.*`：
- `.connect` / `.connectToConnector({connectorName})` / `.connected` / `.reconnect` / `.reconnectToConnector` / `.moreInformation` / `.notNow`
- `widgets.hermes.waitState.loadingMessagesInitialA.*`：`connectingToAgent`、`establishingAgentConnection`、`bootingUpAgent`、`spinngUpAgent` 等（**agent 连接等待文案**）
- 另含 `widgets.hermes.genericTool.*`、`sendEmail.*`、`googleCalendar*.*`、`taskStatus.*`、`waitState.*`（Hermes = ChatGPT 连接外部数据源/connector 的 widget 体系）

**说明**：`widgets.hermes.permission.connected` 是否特指 computer use 画面连接，**不确定**（Hermes 是通用 connector 权限体系，涵盖 calendar/email/google drive 等，非专属于 computer use）。

### 5.5 相关 CSS class 清单

| class | 出现位置 | 用途 |
|---|---|---|
| `.lucide` / `.lucide-<kebab>` | `createLucideIcon` | Lucide 图标基础 + 各图标专属类（如 `lucide-screen-share`）|
| `icon-xs` / `icon-sm` / `icon-2xs` | 各 UI | ChatGPT 图标尺寸 token（`icon-sm`/`icon-2xs` 可见于 §3 相关代码）|
| `.cursor-interaction` | `local-conversation-thread`（show/hide 按钮）| 交互手型光标工具类 |
| `.rounded-md border-0 bg-transparent p-0 text-tertiary` | PiP show/hide 按钮 | 图标型按钮无边框样式 |
| `absolute top-0 left-1 h-[53px] w-[53px] object-contain` | `computer-use-settings` | 电脑图标角标（装饰）|
| `absolute right-0 bottom-0 h-[33px] w-[27px] object-contain` | `computer-use-settings` | 锁图标角标（装饰）|
| `pointer-events-auto absolute z-[24] flex items-...` | PopcornElectron*(Presentation/Workbook)Panel | **无关**（Electron 演示/工作簿浮层）|
| `min-h-5 / min-h-10 / min-h-[60px]` | `control-panel-154af0f1e823.js`（`control-panel` 布局）| **无关**（caption 说明文字面板）|

注：`control-panel-154af0f1e823.js`（导出 `control-panel` / `caption-panel` / `caption-line` / `caption-text`）是**图片说明/字幕面板**组件，与 computer use 无关；任务里提到它可能是误解。

---

## 6. 明确排除项（避免误判）

| 关键词/文件 | 实际归属 | 为何与 Computer Use overlay 无关 |
|---|---|---|
| `FullscreenControl.Enter/Exit` | **mapbox-gl** 全屏控件（`app-primary`）| 地图控件 i18n，`_getTitle` 用 `FullscreenControl.*` |
| `connect-screen` | **图标名** `ConnectScreenFill`（20×20 填充图标）| 不是「连接屏幕」状态 UI |
| `index-0YairKH` | Lucide 图标注册表 | 仅聚合图标条目 |
| `register-BqqwIOLc` | 图标注册 | 仅注册图标名/组件 |
| `remote-connections-page` / `remote-connections-settings` / `remote-connection-editor-draft` / `remote-conversation-page` / `local-remote-dropdown` / `remote-middleware` | **Codex SSH / Codex Cloud 远程连接** | 管理「用手机/远程设备控制这台 Mac/PC」，是 settings/connections，非运行时画面 overlay |
| `control-panel` | 图片说明字幕面板 | caption 不是 computer use 控制器 |
| `computer-use-native-app-metadata` | native desktop app 元数据 query | 仅取 App 显示名，无 UI |

---

## 7. 不确定 / 待验证项

1. **被控制端的「鼠标指针、点击高亮」视觉**：本 bundle 无可证证据。推测由**被控制的 App/浏览器扩展或 native 层**绘制，而非 webview。**不确定**。
2. **暂停/停止 Computer Use 的全屏按钮或快捷键**：在 webview 未发现。`Esc to cancel`/`press Escape to cancel` 仅出现在**侧栏拖拽重排的无障碍说明**（`sidebarCustomization.reorder.instructions`），与 computer use 无关。
3. **`remoteHostedPIP` 浮窗内部 DOM**：由 native 层渲染，本解包的 webview assets 无其 DOM。
4. **Linux 实际 computer use 运行时能力**：设置页 UI（`available`/`allowed`/`isInstalled`）在 Linux 是否存在、能否真正控制 App，属**运行时后端**，前端仅决定显示，未验证（与既有 `browser-use-connectors.md` 第 599 行结论一致）。
5. **是否有其他 bundle（原生端）引用上述 Lucide 图标**：仅分析了 webview assets；原生/扩展侧是否使用这些图标**未验证**。

---

## 8. 关键证据出处（文件）

- `local-conversation-thread-62de5ea343b7.js` — Computer Use PiP Section（`computer-use-pip`）+ 全部 `remoteHostedPip.*` i18n
- `app-initial-c8dbea294abe.js` — `QX = await jSa.services`、`QX.remoteHostedPIP?.{getState,showTask,hideTask,hideForAllActiveTasks,importLegacyHiddenTaskIds}`、`remote-hosted-pip-task-state`、`remote-hosted-pip-task-state-changed`、`remote-hosted-pip-active-thread-changed`、`remote-hosted-pip-hidden-thread-ids`、`Timed out waiting for remote control to connect`、`remoteControl/status/changed` 等 Codex remote control 命令
- `remote-hosted-pip-anchor-bridge-4f45838df2bd.js` — 原生 PiP 浮窗锚点/避让计算
- `computer-use-settings-704f9a61c3bf.js` — `settings.computerUse.*`、`Let ChatGPT control apps on your computer`
- `computer-use-native-app-metadata-41012c2b5b48.js` — native desktop app 元数据
- `controller-884d1bc2bd5c.js` — `composerTips.computerUse.*`
- `header-4fdcee980c6b.js` — `header.browserComputerUseSettings`
- `createLucideIcon-BrIFp4GW-b0f67306ab2c.js` — Lucide 图标 DOM/className/尺寸规则
- `screen-share-*` / `mouse-pointer-*` / `circle-pause-*` / `monitor-pause-*` / `square-mouse-pointer-*` / `square-dashed-mouse-pointer-*` / `computer-gInmNzjb-*` — Lucide 图标定义
- `ConnectScreenFill-b9177a285c1f.js` — `connect-screen` 图标（填充风格）
- `index-0YairKH_-ff279dd3ed67.js` / `register-BqqwIOLc-f2c56f587733.js` — 图标注册表（这些图标仅在此被引用）
- `app-primary-7eef500906c5.js` — `FullscreenControl.Enter/Exit`（mapbox）、`widgets.hermes.*`、`sidebarCustomization.reorder.instructions`、`svg 图标名 list（含 connect-screen）`
