# Original App (app.asar 解包)

本目录是官方 `app.asar` 的**解包内容**的说明与关键入口摘录。完整 315MB 原始解包位于
`/home/huashen/work/chatgpt-deb/app/`（本仓库未复制全量以节省空间，如需全量 grep 请到该路径）。

## app.asar 结构
- `.vite/build/*`：主进程 bundle（Electron main）
- `webview/`：渲染进程前端（`webview/assets/` 6955 个 JS + 204 CSS）
  - `webview/index.html`、`webview/avatar-overlay-composition-surface.html`
- `package.json`：`main = .vite/build/early-bootstrap.js`
- `node_modules/`：主进程依赖

## 前端入口（package.json.main）
{
  "name": "openai-codex-electron",
  "productName": "Codex",
  "author": "OpenAI",
  "version": "26.901.31953",
  "description": "Codex",
  "main": ".vite/build/early-bootstrap.js",
  "scripts": {
    "compile": "node ./scripts/ensure-owl-electron-types.mjs && pnpm exec tsc -b",
    "tsc": "node ./scripts/ensure-owl-electron-types.mjs && pnpm exec tsc --noEmit",
    "dev": "pnpm --dir .. run app",
    "prepare:owl": "pnpm exec node ./scripts/prepare-dev.mjs --native-modules && cross-env NODE_ENV=development pnpm run build:dev-vite",
    "owl": "pnpm run prepare:owl && cross-env NODE_ENV=development node ./scripts/owl-shell.mjs run -- --use-mock-keychain",
    "build": "node -e \"require('node:fs').rmSync('out',{force:true,recursive:true})\" && cross-env PNPM_YES=true pnpm run forge:make",
    "build:dev-vite": "node ./scripts/build-dev-vite.mjs",
    "forge:make": "pnpm run rebuild:native-modules && electron-forge make",
    "forge:make:owl-shell": "electron-forge make",
    "forge:publish": "pnpm run rebuild:native-modules && electron-forge publish",
    "owl:ensure": "node ./scripts/owl-shell.mjs ensure",
    "package": "node ./scripts/package.mjs",
    "format": "oxfmt --check",
    "format:fix": "oxfmt --write",
    "lint": "node ./scripts/ensure-owl-electron-types.mjs && node ../scripts/run-package-oxlint.mjs --include-top-level-ts-scripts",
    "lint:fix": "node ./scripts/ensure-owl-electron-types.mjs && node ../scripts/run-package-oxlint.mjs --include-top-level-ts-scripts --fix",
    "metadata-path": "pnpm exec tsx ./scripts/dev-metadata.ts path",
    "memory:analyze-snapshot": "node ./scripts/analyze-heap-snapshot.mjs",
    "test": "vitest run",
    "test:quiet": "vitest run --silent --reporter=dot",
    "e2e:computer-use-native-pipe": "node --import tsx ./scripts/computer-use-native-pipe-e2e.mjs",
    "playwright:agent:repl": "node --import tsx ./scripts/playwright-electron-agent-cdp.mjs",
