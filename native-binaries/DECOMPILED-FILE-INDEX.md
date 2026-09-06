# 反编译文件级 Demangled 索引

> 每个反编译 `.c` 文件 → 函数 → 地址 → 行数。按二进制分组。
> 函数名优先取文件名的友好名；否则用首行注释里的符号经 c++filt demangle。地址为首行注释的 Ghidra 地址。


## sky_linux_x64  (27 个函数)

| 行数 | 地址 | 函数 (demangled) | 文件 |
|---|---|---|---|
| 4298 | `0x00135210` | `X11FullDesktopClient_get_screenshot` | `decomp_1_X11FullDesktopClient_get_screenshot` |
| 2077 | `0x0011b7c0` | `sky_linux_main` | `decomp_2_sky_linux_main` |
| 1943 | `0x00118e20` | `Args_command` | `decomp_3_Args_command` |
| 1389 | `0x00154a20` | `KeyPresser_new` | `decomp_4_KeyPresser_new` |
| 1142 | `0x00154f00` | `keys` | `decomp_5_keys` |
| 616 | `0x002548d0` | `zune_jpeg::mcu_prog::<impl zune_jpeg::decoder::JpegDecoder<T>>::han...` | `decomp__ZN9zune_jpeg8mcu_prog58__LT_impl_...` |
| 369 | `0x00143220` | `core::ptr::drop_in_place<sky_linux::client::x11::paste_text::Tempor...` | `decomp__ZN4core3ptr75drop_in_place_LT_sky...` |
| 266 | `0x00162580` | `main` | `decomp_main` |
| 151 | `0x002c0c70` | `std::sys::random::linux::hashmap_random_keys::hfa8be8b76fbdbfc1` | `decomp__ZN3std3sys6random5linux19hashmap_...` |
| 130 | `0x002b31f0` | `core::slice::sort::stable::driftsort_main::hf7b330cef74185f4` | `decomp__ZN4core5slice4sort6stable14drifts...` |
| 120 | `0x0013a1c0` | `direction_deserialize` | `decomp_6_direction_deserialize` |
| 117 | `0x0013a380` | `<sky_linux::protocol::mouse_button::_::<impl serde_core::de::Deseri...` | `decomp_6b_mouse_button_deserialize` |
| 115 | `0x002a6f60` | `core::slice::sort::stable::driftsort_main::h4c9afde6b9e59f51` | `decomp__ZN4core5slice4sort6stable14drifts...` |
| 112 | `0x002abfd0` | `core::slice::sort::stable::driftsort_main::hc01dea5c8fb3682e` | `decomp__ZN4core5slice4sort6stable14drifts...` |
| 90 | `0x00142d10` | `core::ptr::drop_in_place<sky_linux::client::x11::key_presser::KeyPr...` | `decomp__ZN4core3ptr68drop_in_place_LT_sky...` |
| 70 | `0x002b3300` | `core::slice::sort::stable::driftsort_main::h185cef6696f0e7c3` | `decomp__ZN4core5slice4sort6stable14drifts...` |
| 52 | `0x002af2b0` | `core::slice::sort::stable::driftsort_main::hf6a6e7bd174670ad` | `decomp__ZN4core5slice4sort6stable14drifts...` |
| 47 | `0x001bcbd0` | `core::slice::sort::stable::driftsort_main::h91eeb56c797cfdbd` | `decomp__ZN4core5slice4sort6stable14drifts...` |
| 47 | `0x001bb820` | `core::slice::sort::stable::driftsort_main::h7f51f3c2985affd8` | `decomp__ZN4core5slice4sort6stable14drifts...` |
| 47 | `0x001ba520` | `core::slice::sort::stable::driftsort_main::h3344ef9042a7600f` | `decomp__ZN4core5slice4sort6stable14drifts...` |
| 47 | `0x00144ac0` | `core::slice::sort::stable::driftsort_main::hd976ad22594e2a29` | `decomp__ZN4core5slice4sort6stable14drifts...` |
| 32 | `0x00140fe0` | `core::ptr::drop_in_place<alloc::vec::Vec<sky_linux::protocol::full_...` | `decomp__ZN4core3ptr101drop_in_place_LT_al...` |
| 20 | `0x0011e470` | `sky_linux::client::x11::paste_text::TemporaryClipboard::new::{{clos...` | `decomp__ZN9sky_linux6client3x1110paste_te...` |
| 17 | `0x00142ce0` | `core::ptr::drop_in_place<sky_linux::protocol::full_desktop::drag::I...` | `decomp__ZN4core3ptr67drop_in_place_LT_sky...` |
| 13 | `0x003822e8` | `__libc_start_main` | `decomp___libc_start_main` |
| 12 | `0x003822b0` | `XKeysymToKeycode` | `decomp_XKeysymToKeycode` |
| 12 | `0x00382268` | `XKeycodeToKeysym` | `decomp_XKeycodeToKeysym` |

## node_repl  (16 个函数)

| 行数 | 地址 | 函数 (demangled) | 文件 |
|---|---|---|---|
| 786 | `0x00405a40` | `node_repl[24b3a48175b1ef1c]::computer_use::computer_use_request_info` | `decomp__RNvNtCs39mte1n7CTo_9node_repl12co...` |
| 660 | `0x00408d60` | `<node_repl[24b3a48175b1ef1c]::computer_use::ComputerUseElicitationI...` | `decomp__RNvXs_NtCs39mte1n7CTo_9node_repl1...` |
| 531 | `0x003ff4a0` | `<node_repl[24b3a48175b1ef1c]::computer_use::ComputerUseElicitationI...` | `decomp__RNCNvXs_NtCs39mte1n7CTo_9node_rep...` |
| 506 | `0x00406000` | `node_repl[24b3a48175b1ef1c]::computer_use::computer_use_conversatio...` | `decomp__RNvNtCs39mte1n7CTo_9node_repl12co...` |
| 241 | `0x00405530` | `node_repl[24b3a48175b1ef1c]::computer_use::computer_use_state_path` | `decomp__RNvNtCs39mte1n7CTo_9node_repl12co...` |
| 187 | `0x00405170` | `node_repl[24b3a48175b1ef1c]::computer_use::table_app_is_listed` | `decomp__RNvNtCs39mte1n7CTo_9node_repl12co...` |
| 154 | `0x00406ab0` | `node_repl[24b3a48175b1ef1c]::computer_use::read_existing_computer_u...` | `decomp__RNvNtCs39mte1n7CTo_9node_repl12co...` |
| 144 | `0x00405730` | `node_repl[24b3a48175b1ef1c]::computer_use::auto_computer_use_result` | `decomp__RNvNtCs39mte1n7CTo_9node_repl12co...` |
| 126 | `0x003e7490` | `<toml_edit[f7467ff23a3675d1]::table::Entry>::or_insert_with::<node_...` | `decomp__RINvMs7_NtCsleeWMjgK1Yj_9toml_edi...` |
| 100 | `0x00406d10` | `node_repl[24b3a48175b1ef1c]::computer_use::resolve_computer_use_ses...` | `decomp__RNvNtCs39mte1n7CTo_9node_repl12co...` |
| 70 | `0x003fef00` | `<alloc[f2938bf7b92e8d99]::vec::Vec<toml_edit[f7467ff23a3675d1]::ite...` | `decomp__RNCINvMs_NtCskPe9mFtgPYj_5alloc3v...` |
| 51 | `0x003f6110` | `<alloc[f2938bf7b92e8d99]::vec::Vec<toml_edit[f7467ff23a3675d1]::ite...` | `decomp__RINvMs_NtCskPe9mFtgPYj_5alloc3vec...` |
| 39 | `0x004054a0` | `node_repl[24b3a48175b1ef1c]::computer_use::non_empty_string_value` | `decomp__RNvNtCs39mte1n7CTo_9node_repl12co...` |
| 30 | `0x003fe320` | `<core[57bcf5bae857821d]::slice::iter::Iter<serde_json[13f7e05aa5e79...` | `decomp__RINvXs2J_NtNtCs7x1JxYRm7tp_4core5...` |
| 20 | `0x003fa7b0` | `core[57bcf5bae857821d]::ptr::drop_glue::<node_repl[24b3a48175b1ef1c...` | `decomp__RINvNtCs7x1JxYRm7tp_4core3ptr9dro...` |
| 10 | `0x003fa3d0` | `core[57bcf5bae857821d]::ptr::drop_glue::<<node_repl[24b3a48175b1ef1...` | `decomp__RINvNtCs7x1JxYRm7tp_4core3ptr9dro...` |

## extension-host  (50 个函数)

| 行数 | 地址 | 函数 (demangled) | 文件 |
|---|---|---|---|
| 541 | `0x001397e0` | `extension_host[1047795fc1b4cb62]::main` | `decomp__RNvCs1oEx7o4003C_14extension_host...` |
| 297 | `0x0013e290` | `<std[1e3c4ec04c5261a9]::sync::mpmc::zero::Channel<extension_host[48...` | `decomp__RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4s...` |
| 284 | `0x0013c5c0` | `<std[1e3c4ec04c5261a9]::sync::mpmc::zero::Channel<extension_host[48...` | `decomp__RNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std...` |
| 231 | `0x00139000` | `<std[1e3c4ec04c5261a9]::sync::mpmc::array::Channel<extension_host[4...` | `decomp__RNvMs_NtNtNtCs2AWtUsOyxgP_3std4sy...` |
| 189 | `0x0013a620` | `<alloc[24b8200b0946867]::sync::Arc<extension_host[48b628e2cb45de7c]...` | `decomp__RNvMsn_NtCscdodAO9FK5_5alloc4sync...` |
| 182 | `0x00133f30` | `<alloc[24b8200b0946867]::collections::btree::map::IntoIter<alloc[24...` | `decomp__RNvMsz_NtNtNtCscdodAO9FK5_5alloc1...` |
| 180 | `0x00134be0` | `<std[1e3c4ec04c5261a9]::sync::mpmc::Receiver<extension_host[48b628e...` | `decomp__RNvXsi_NtNtCs2AWtUsOyxgP_3std4syn...` |
| 175 | `0x00136e40` | `<std[1e3c4ec04c5261a9]::sync::mpmc::list::Channel<extension_host[48...` | `decomp__RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4s...` |
| 172 | `0x00134310` | `<alloc[24b8200b0946867]::vec::Vec<(usize, alloc[24b8200b0946867]::s...` | `decomp__RNvXNtNtCscdodAO9FK5_5alloc3vec14...` |
| 168 | `0x00134780` | `<std[1e3c4ec04c5261a9]::sync::mpmc::Sender<alloc[24b8200b0946867]::...` | `decomp__RNvXs4_NtNtCs2AWtUsOyxgP_3std4syn...` |
| 154 | `0x00134810` | `<std[1e3c4ec04c5261a9]::sync::mpmc::Sender<extension_host[48b628e2c...` | `decomp__RNvXs4_NtNtCs2AWtUsOyxgP_3std4syn...` |
| 131 | `0x00134b90` | `<std[1e3c4ec04c5261a9]::sync::mpmc::Receiver<alloc[24b8200b0946867]...` | `decomp__RNvXsi_NtNtCs2AWtUsOyxgP_3std4syn...` |
| 124 | `0x001374a0` | `<std[1e3c4ec04c5261a9]::sync::mpmc::array::Channel<alloc[24b8200b09...` | `decomp__RNCNvMs_NtNtNtCs2AWtUsOyxgP_3std4...` |
| 124 | `0x00134df0` | `<std[1e3c4ec04c5261a9]::sync::mpmc::list::Channel<alloc[24b8200b094...` | `decomp__RNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std...` |
| 94 | `0x00133be0` | `<alloc[24b8200b0946867]::collections::vec_deque::VecDeque<alloc[24b...` | `decomp__RNvMs3_NtNtCscdodAO9FK5_5alloc11c...` |
| 87 | `0x001336f0` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<serde_json[c0f22e2233b08f3...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 70 | `0x00134a00` | `<alloc[24b8200b0946867]::collections::vec_deque::VecDeque<alloc[24b...` | `decomp__RNvXs_NtNtCscdodAO9FK5_5alloc11co...` |
| 68 | `0x001348a0` | `<alloc[24b8200b0946867]::vec::drain::Drain<std[1e3c4ec04c5261a9]::s...` | `decomp__RNvXs5_NtNtCscdodAO9FK5_5alloc3ve...` |
| 61 | `0x00132f00` | `<std[1e3c4ec04c5261a9]::sys::thread_local::native::lazy::Storage<co...` | `decomp__RINvMs0_NtNtNtNtCs2AWtUsOyxgP_3st...` |
| 60 | `0x0013afe0` | `<std[1e3c4ec04c5261a9]::sync::mpmc::context::Context>::with::<<std[...` | `decomp__RNCINvMNtNtNtCs2AWtUsOyxgP_3std4s...` |
| 56 | `0x00134580` | `<alloc[24b8200b0946867]::collections::btree::map::BTreeMap<alloc[24...` | `decomp__RNvXNtNtNtCscdodAO9FK5_5alloc11co...` |
| 54 | `0x0013ea30` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<alloc[24b8200b0946867]::sy...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 52 | `0x0013a870` | `<alloc[24b8200b0946867]::sync::Arc<std[1e3c4ec04c5261a9]::thread::l...` | `decomp__RNvMsn_NtCscdodAO9FK5_5alloc4sync...` |
| 51 | `0x00133e10` | `<alloc[24b8200b0946867]::raw_vec::RawVecInner>::finish_grow` | `decomp__RNvMs4_NtCscdodAO9FK5_5alloc7raw_...` |
| 46 | `0x0013ac90` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<core[37f591cfbe66b0b1]::op...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 46 | `0x001339d0` | `<std[1e3c4ec04c5261a9]::sync::mpmc::Sender<alloc[24b8200b0946867]::...` | `decomp__RNvMs2_NtNtCs2AWtUsOyxgP_3std4syn...` |
| 40 | `0x00133950` | `<alloc[24b8200b0946867]::raw_vec::RawVecInner<_>>::reserve::do_rese...` | `decomp__RINvNvMs2_NtCscdodAO9FK5_5alloc7r...` |
| 39 | `0x001338e0` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<std[1e3c4ec04c5261a9]::syn...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 37 | `0x00133ec0` | `<std[1e3c4ec04c5261a9]::sync::poison::mutex::Mutex<extension_host[4...` | `decomp__RNvMs5_NtNtNtCs2AWtUsOyxgP_3std4s...` |
| 36 | `0x001346d0` | `<<alloc[24b8200b0946867]::collections::btree::map::IntoIter<_, _, _...` | `decomp__RNvXNvXsy_NtNtNtCscdodAO9FK5_5all...` |
| 35 | `0x0013ab00` | `<alloc[24b8200b0946867]::sync::Arc<std[1e3c4ec04c5261a9]::sync::mpm...` | `decomp__RNvMsn_NtCscdodAO9FK5_5alloc4sync...` |
| 34 | `0x0013aac0` | `<alloc[24b8200b0946867]::sync::Arc<extension_host[48b628e2cb45de7c]...` | `decomp__RNvMsn_NtCscdodAO9FK5_5alloc4sync...` |
| 33 | `0x0013ad20` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<std[1e3c4ec04c5261a9]::syn...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 33 | `0x00134c00` | `<alloc[24b8200b0946867]::vec::Vec<alloc[24b8200b0946867]::boxed::Bo...` | `decomp__RNvXso_NtCscdodAO9FK5_5alloc3vecI...` |
| 32 | `0x00133ae0` | `<alloc[24b8200b0946867]::raw_vec::RawVec<std[1e3c4ec04c5261a9]::syn...` | `decomp__RNvMs3_NtCscdodAO9FK5_5alloc7raw_...` |
| 32 | `0x00133a80` | `<alloc[24b8200b0946867]::raw_vec::RawVec<alloc[24b8200b0946867]::sy...` | `decomp__RNvMs3_NtCscdodAO9FK5_5alloc7raw_...` |
| 31 | `0x00132e90` | `<std[1e3c4ec04c5261a9]::thread::builder::Builder>::spawn_unchecked:...` | `decomp__RINvMNtNtCs2AWtUsOyxgP_3std6threa...` |
| 30 | `0x0013ad70` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<std[1e3c4ec04c5261a9]::syn...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 30 | `0x00139730` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<std[1e3c4ec04c5261a9]::io:...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 29 | `0x0013abb0` | `<alloc[24b8200b0946867]::sync::Arc<[u8]>>::drop_slow` | `decomp__RNvMsn_NtCscdodAO9FK5_5alloc4sync...` |
| 28 | `0x0013e910` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<core[37f591cfbe66b0b1]::re...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 27 | `0x0013ab80` | `<alloc[24b8200b0946867]::sync::Arc<std[1e3c4ec04c5261a9]::os::unix:...` | `decomp__RNvMsn_NtCscdodAO9FK5_5alloc4sync...` |
| 27 | `0x00133660` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<<alloc[24b8200b0946867]::c...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 27 | `0x00133570` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<<alloc[24b8200b0946867]::c...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 26 | `0x0013abe0` | `<alloc[24b8200b0946867]::sync::Weak<extension_host[48b628e2cb45de7c...` | `decomp__RNvXsN_NtCscdodAO9FK5_5alloc4sync...` |
| 26 | `0x0013aa90` | `<alloc[24b8200b0946867]::sync::Arc<std[1e3c4ec04c5261a9]::sync::poi...` | `decomp__RNvMsn_NtCscdodAO9FK5_5alloc4sync...` |
| 26 | `0x00133920` | `std[1e3c4ec04c5261a9]::sys::thread_local::native::lazy::destroy::<c...` | `decomp__RINvNtNtNtNtCs2AWtUsOyxgP_3std3sy...` |
| 26 | `0x00133600` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<<alloc[24b8200b0946867]::v...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 25 | `0x0013e840` | `core[37f591cfbe66b0b1]::ptr::drop_glue::<core[37f591cfbe66b0b1]::ce...` | `decomp__RINvNtCs4NRVxsYgnAr_4core3ptr9dro...` |
| 18 | `0x00132fc0` | `<std[1e3c4ec04c5261a9]::path::Path>::join::<alloc[24b8200b0946867]:...` | `decomp__RINvMs16_NtCs2AWtUsOyxgP_3std4pat...` |

## tectonic  (72 个函数)

| 行数 | 地址 | 函数 (demangled) | 文件 |
|---|---|---|---|
| 504 | `0x00416c10` | `<serde_json[11de382987421ee0]::error::Error as serde_core[7487ff647...` | `decomp__RINvXs7_NtCs1x6TnE7aJwa_10serde_j...` |
| 495 | `0x004172f0` | `<hashbrown[fade0e9ee0acc53a]::raw::RawTable<(alloc[f2938bf7b92e8d99...` | `decomp__RINvMs6_NtCslxmoZqXxa5O_9hashbrow...` |
| 473 | `0x00415240` | `<hashbrown[99d88c024fc7f74c]::raw::RawTable<usize>>::reserve_rehash...` | `decomp__RINvMs6_NtCsdcUUXnWQAR4_9hashbrow...` |
| 468 | `0x00413480` | `<hashbrown[fade0e9ee0acc53a]::raw::RawTable<(alloc[f2938bf7b92e8d99...` | `decomp__RINvMs6_NtCslxmoZqXxa5O_9hashbrow...` |
| 315 | `0x00402c60` | `<<tectonic[51fb58436c9aac47]::v2cli::commands::bundle::select::spec...` | `decomp__RINvYNtNvXNvNtNtNtNtNtCs72o0HLIKW...` |
| 259 | `0x00403e70` | `<sharded_slab[4777fc0b4239639a]::page::Shared<tracing_subscriber[b3...` | `decomp__RNvMs4_NtCs68qq9mATycw_12sharded_...` |
| 257 | `0x00402210` | `<regex_automata[4b67442182794790]::util::pool::inner::Pool<regex_au...` | `decomp__RNvMs2_NtNtNtCs6tmXYgVzUvQ_14rege...` |
| 242 | `0x00416730` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<tectonic_xdv[873c8f5ab79b...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 228 | `0x00401e80` | `<sharded_slab[4777fc0b4239639a]::tid::Registration>::register::<sha...` | `decomp__RINvMs6_NtCs68qq9mATycw_12sharded...` |
| 223 | `0x004043b0` | `<std[1872964b1103b53d]::sync::once::Once>::call_once_force::<<std[1...` | `decomp__RNCINvMs0_NtNtCs268jdzri8zx_3std4...` |
| 197 | `0x00403150` | `<smallvec[2f48695389731436]::SmallVec<[tracing_subscriber[b366c19d8...` | `decomp__RNvMsd_Cs43GvdauwMgQ_8smallvecINt...` |
| 162 | `0x004168f0` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<tectonic_engine_spx2html[...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 157 | `0x00404540` | `<<std[1872964b1103b53d]::sync::once::Once>::call_once_force<<std[18...` | `decomp__RNSNvYNCINvMs0_NtNtCs268jdzri8zx_...` |
| 142 | `0x00416960` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<(core[57bcf5bae857821d]::...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 142 | `0x00414ef0` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<indexmap[87e0654814a7db19...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 142 | `0x00406d80` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<std[1872964b1103b53d]::pr...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 122 | `0x004169d0` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<(char, u16)>>::grow_one` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 122 | `0x00414f60` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<tectonic_engine_bibtex[49...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 108 | `0x00402750` | `<serde[e8e590faa2bf5a19]::private::de::content::ContentVisitor as s...` | `decomp__RINvYNtNtNtNtCsjZHDNc5e1kr_5serde...` |
| 102 | `0x00416a40` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<i32>>::grow_one` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 102 | `0x00413bc0` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<tectonic_xetex_layout[95a...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 102 | `0x00406e60` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<tectonic[51fb58436c9aac47...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 80 | `0x00416560` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVecInner<_>>::reserve::do_res...` | `decomp__RINvNvMs2_NtCskPe9mFtgPYj_5alloc7...` |
| 77 | `0x00416ab0` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<u16>>::grow_one` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 77 | `0x00415040` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<tectonic_engine_bibtex[49...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 77 | `0x00413c30` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<alloc[f2938bf7b92e8d99]::...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 77 | `0x0040f9a0` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<tectonic[f4d224311602ce5e...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 77 | `0x00406ed0` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVec<(watchexec[4de1862391eaec...` | `decomp__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw...` |
| 76 | `0x00410500` | `core[57bcf5bae857821d]::str::pattern::simd_contains::{closure#2}` | `decomp__RNCNvNtNtCs7x1JxYRm7tp_4core3str7...` |
| 75 | `0x00403020` | `<<<tectonic[51fb58436c9aac47]::v2cli::commands::bundle::select::spe...` | `decomp__RINvYNtNvXs0_NvXNvNtNtNtNtNtCs72o...` |
| 74 | `0x00402560` | `serde[e8e590faa2bf5a19]::private::de::content::visit_content_seq_re...` | `decomp__RINvNtNtNtCsjZHDNc5e1kr_5serde7pr...` |
| 72 | `0x00416280` | `<tera[cfdc0308ae910e77]::errors::Error as anyhow[efc5584bfc8f177b]:...` | `decomp__RINvXNtNtCskAih3DnBuhX_6anyhow7co...` |
| 69 | `0x004125a0` | `<tectonic[f4d224311602ce5e]::status::termcolor::TermcolorStatusBack...` | `decomp__RNvXs_NtNtCsl1aTsAD2QWw_8tectonic...` |
| 65 | `0x004033a0` | `<smallvec[2f48695389731436]::SmallVec<[u8; 64: usize]>>::reserve_on...` | `decomp__RNvMsd_Cs43GvdauwMgQ_8smallvecINt...` |
| 57 | `0x00405580` | `<serde_core[7487ff647725c3b2]::de::impls::PathBufVisitor as serde_c...` | `decomp__RINvYNtNtNtCsa0iawoYldi8_10serde_...` |
| 57 | `0x00404860` | `<<std[1872964b1103b53d]::collections::hash::map::HashMap<_, _, _> a...` | `decomp__RINvYINtNvXs3e_NtNtCsa0iawoYldi8_...` |
| 54 | `0x00412940` | `<alloc[f2938bf7b92e8d99]::ffi::c_str::NulError as anyhow[efc5584bfc...` | `decomp__RINvXNtNtCskAih3DnBuhX_6anyhow7co...` |
| 53 | `0x00415cb0` | `<anyhow[efc5584bfc8f177b]::Error>::construct::<anyhow[efc5584bfc8f1...` | `decomp__RINvMNtCskAih3DnBuhX_6anyhow5erro...` |
| 52 | `0x00416b20` | `<alloc[f2938bf7b92e8d99]::raw_vec::RawVecInner>::finish_grow` | `decomp__RNvMs4_NtCskPe9mFtgPYj_5alloc7raw...` |
| 50 | `0x004164f0` | `<anyhow[efc5584bfc8f177b]::Error as core[57bcf5bae857821d]::convert...` | `decomp__RNvXs_NtCskAih3DnBuhX_6anyhow5err...` |
| 50 | `0x00415850` | `<anyhow[efc5584bfc8f177b]::Error>::msg::<alloc[f2938bf7b92e8d99]::s...` | `decomp__RINvMNtCskAih3DnBuhX_6anyhow5erro...` |
| 50 | `0x00412040` | `<quick_xml[26d5f0db6a31b68e]::errors::Error as anyhow[efc5584bfc8f1...` | `decomp__RINvXNtNtCskAih3DnBuhX_6anyhow7co...` |
| 47 | `0x00416690` | `<std[1872964b1103b53d]::io::error::Error as anyhow[efc5584bfc8f177b...` | `decomp__RINvXNtNtCskAih3DnBuhX_6anyhow7co...` |
| 47 | `0x00415fd0` | `<anyhow[efc5584bfc8f177b]::Error>::construct::<tectonic_xdv[873c8f5...` | `decomp__RINvMNtCskAih3DnBuhX_6anyhow5erro...` |
| 46 | `0x00416350` | `<core[57bcf5bae857821d]::str::error::Utf8Error as anyhow[efc5584bfc...` | `decomp__RINvXNtNtCskAih3DnBuhX_6anyhow7co...` |
| 43 | `0x00410690` | `<toml[4cee1a7a3e6a3487]::de::deserializer::table::TableDeserializer...` | `decomp__RINvXs_NtNtNtCs6BuOKapWo4J_4toml2...` |
| 42 | `0x00415e30` | `<anyhow[efc5584bfc8f177b]::Error>::construct::<anyhow[efc5584bfc8f1...` | `decomp__RINvMNtCskAih3DnBuhX_6anyhow5erro...` |
| 41 | `0x004161e0` | `<anyhow[efc5584bfc8f177b]::Error>::construct::<std[1872964b1103b53d...` | `decomp__RINvMNtCskAih3DnBuhX_6anyhow5erro...` |
| 40 | `0x00412510` | `<std[1872964b1103b53d]::io::buffered::bufwriter::BufWriter<std[1872...` | `decomp__RNvMs_NtNtNtCs268jdzri8zx_3std2io...` |
| 39 | `0x0040ea70` | `<tectonic[f4d224311602ce5e]::driver::BridgeState as tectonic_bridge...` | `decomp__RNCNvXs3_NtCsl1aTsAD2QWw_8tectoni...` |
| 34 | `0x00411390` | `<serde_core[7487ff647725c3b2]::de::impls::StringVisitor as serde_co...` | `decomp__RINvYNtNtNtCsa0iawoYldi8_10serde_...` |
| 34 | `0x00410cf0` | `<<alloc[f2938bf7b92e8d99]::vec::Vec<_> as serde_core[7487ff647725c3...` | `decomp__RINvYINtNvXsh_NtNtCsa0iawoYldi8_1...` |
| 34 | `0x00410490` | `<<tectonic[f4d224311602ce5e]::config::BundleInfo as serde_core[7487...` | `decomp__RINvYNtNvXNvNtCsl1aTsAD2QWw_8tect...` |
| 34 | `0x0040fff0` | `<<tectonic[f4d224311602ce5e]::config::PersistentConfig as serde_cor...` | `decomp__RINvYNtNvXNvNtCsl1aTsAD2QWw_8tect...` |
| 32 | `0x00416bd0` | `<std[1872964b1103b53d]::sys::thread_local::native::lazy::Storage<co...` | `decomp__RINvMs0_NtNtNtNtCs268jdzri8zx_3st...` |
| 30 | `0x0040fb20` | `<toml[4cee1a7a3e6a3487]::de::error::Error as serde_core[7487ff64772...` | `decomp__RNvYNtNtNtCs6BuOKapWo4J_4toml2de5...` |
| 25 | `0x0040428e` | `<std[1872964b1103b53d]::sync::once_lock::OnceLock<alloc[f2938bf7b92...` | `decomp__RINvMNtNtCs268jdzri8zx_3std4sync9...` |
| 23 | `0x0041495f` | `<std[1872964b1103b53d]::sync::once_lock::OnceLock<tectonic_bridge_f...` | `decomp__RINvMNtNtCs268jdzri8zx_3std4sync9...` |
| 21 | `0x004149b1` | `core[57bcf5bae857821d]::panicking::assert_failed::<*mut tectonic_br...` | `decomp__RINvNtCs7x1JxYRm7tp_4core9panicki...` |
| 21 | `0x00403e30` | `<tectonic[51fb58436c9aac47]::v2cli::commands::dump::DumpCommand as ...` | `decomp__RNCNvXNtNtNtCs72o0HLIKWBT_8tecton...` |
| 21 | `0x004021d0` | `tectonic[51fb58436c9aac47]::v2cli::do_external::{closure#2}` | `decomp__RNCNvNtCs72o0HLIKWBT_8tectonic5v2...` |
| 20 | `0x0040fb80` | `<tectonic_docmodel[1d50f152974936d0]::document::Document as tectoni...` | `decomp__RNCNvXs_NtCsl1aTsAD2QWw_8tectonic...` |
| 16 | `0x00403110` | `<serde[e8e590faa2bf5a19]::private::de::content::ContentRefDeseriali...` | `decomp__RNvMs9_NtNtNtCsjZHDNc5e1kr_5serde...` |
| 15 | `0x004158d0` | `<anyhow[efc5584bfc8f177b]::Error>::msg::<&str>` | `decomp__RINvMNtCskAih3DnBuhX_6anyhow5erro...` |
| 15 | `0x00414ba0` | `<anyhow[efc5584bfc8f177b]::Error>::msg::<&str>` | `decomp__RINvMNtCskAih3DnBuhX_6anyhow5erro...` |
| 15 | `0x00411480` | `<anyhow[efc5584bfc8f177b]::Error>::msg::<&str>` | `decomp__RINvMNtCskAih3DnBuhX_6anyhow5erro...` |
| 15 | `0x0040fb00` | `<tectonic[f4d224311602ce5e]::test_util::TestBundle as tectonic_io_b...` | `decomp__RNvYNtNtCsl1aTsAD2QWw_8tectonic9t...` |
| 15 | `0x0040fae0` | `<tectonic_io_base[97af718adb7ef83b]::stdstreams::BufferedPrimaryIo ...` | `decomp__RNvYNtNtCsd1pSBPW7Spb_16tectonic_...` |
| 15 | `0x0040fac0` | `<tectonic_io_base[97af718adb7ef83b]::filesystem::FilesystemPrimaryI...` | `decomp__RNvYNtNtCsd1pSBPW7Spb_16tectonic_...` |
| 15 | `0x0040eb00` | `<tectonic[f4d224311602ce5e]::driver::BridgeState as tectonic_io_bas...` | `decomp__RNvYNtNtCsl1aTsAD2QWw_8tectonic6d...` |
| 15 | `0x00401110` | `<anyhow[efc5584bfc8f177b]::Error>::msg::<&str>` | `decomp__RINvMNtCskAih3DnBuhX_6anyhow5erro...` |
| 13 | `0x004149f6` | `AES_cbc_encrypt_tectonic.cold` | `decomp_AES_cbc_encrypt_tectonicold` |
