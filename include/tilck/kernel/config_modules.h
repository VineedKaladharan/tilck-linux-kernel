/* SPDX-License-Identifier: BSD-2-Clause */

/*
 * This is a TEMPLATE. The actual "config_modules.h" is generated by CMake
 * and put in <BUILD_DIR>/tilck_gen_headers.
 */

#pragma once

#cmakedefine01    MOD_kb8042
#cmakedefine01    MOD_console
#cmakedefine01    MOD_fb
#cmakedefine01    MOD_serial
#cmakedefine01    MOD_debugpanel
#cmakedefine01    MOD_tracing

/*
 * Module-specific config options that won't affect the whole kernel.
 *
 * We'll keep these here until they become too many. At that point, each module
 * will have its own config file. It's too early for that, at the moment.
 */
#cmakedefine01    FB_CONSOLE_BANNER
#cmakedefine01    KERNEL_SHOW_LOGO
#cmakedefine01    FB_CONSOLE_USE_ALT_FONTS
#cmakedefine01    SERIAL_CON_IN_VIDEO_MODE
#cmakedefine01    TERM_BIG_SCROLL_BUF
