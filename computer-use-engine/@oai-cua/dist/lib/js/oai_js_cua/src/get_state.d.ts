import type { setupBrowserRuntime } from "@oai/browser";
import type { sky } from "@oai/sky";
type BrowserProvider = Awaited<ReturnType<typeof setupBrowserRuntime>>["browsers"];
export declare function get_state({ browsers: browser_provider, computer, }: {
    browsers?: BrowserProvider;
    computer?: typeof sky;
}): Promise<{
    apps: import("node_modules/@oai/sky/src/types/window/ListApps").App[] | never[];
    browsers: {
        tabs: import("@oai/browser").GlobalAgentBrowserTab[];
        id: string;
        name?: string;
        family?: string;
        type?: "iab" | "extension" | "cdp";
        profileName?: string;
        metadata?: {
            extensionInstanceId?: string;
            codexSessionId?: string;
        };
    }[];
}>;
export {};
