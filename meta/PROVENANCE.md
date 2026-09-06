# 来源与复现

## 源包
- 文件：`~/Downloads/chatgpt_amd64.deb`
- 包名/版本：`chatgpt 26.901.31953` (amd64)
- Maintainer：OpenAI <support@openai.com>
- Homepage：https://developers.openai.com/codex/app
- Description：ChatGPT by OpenAI
- 依赖要点：libgtk-3-0, libnss3, libatspi2.0-0, libx11-6, libxcb1, libgbm1, mesa-vulkan-drivers 等

## 解包命令
```bash
mkdir -p /home/huashen/work/chatgpt-deb && cd /home/huashen/work/chatgpt-deb
ar x ~/Downloads/chatgpt_amd64.deb           # 得到 data.tar.xz, control.tar.xz
mkdir -p rootfs && tar xJf data.tar.xz -C rootfs   # 完整 app (1.4G)，位于 rootfs/usr/lib/chatgpt
# 前端 app.asar 解包：
cd /home/huashen/work/chatgpt-deb
npx --yes @electron/asar extract rootfs/usr/lib/chatgpt/resources/app.asar app
```

## 关键路径
- app 根：`rootfs/usr/lib/chatgpt/`
- 前端：`app/webview/assets/`（6955 JS + 204 CSS）
- computer use 引擎：`rootfs/usr/lib/chatgpt/resources/cua_node/lib/node_modules/@oai/{cua,sky,browser-desktop}`
- computer use 插件：`rootfs/usr/lib/chatgpt/resources/plugins/openai-bundled/plugins/unified-computer-use/`
- 原生后端：`rootfs/usr/lib/chatgpt/resources/cua_node/lib/node_modules/@oai/sky/bin/linux/sky_linux_x64`
- 其它大二进制：`resources/codex`(258MB, CLI)、`resources/codex-code-mode-host`(69MB)、`resources/app.asar`(292MB)

## 关键组件版本
| 组件 | 版本 |
|---|---|
| chatgpt (deb) | 26.901.31953 |
| @oai/cua | 0.2.4 |
| @oai/sky | 0.6.26 |
| @oai/browser-desktop | 0.1.1 |
| sky_linux native | crate `sky_linux`, `--client x11-full-desktop` |
