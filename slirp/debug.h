/*
 * Copyright (c) 1995 Danny Gasparovski.
 *
 * Please read the file COPYRIGHT for the
 * terms and conditions of the copyright.
 */

#ifndef DEBUG_H_
#define DEBUG_H_

#define DBG_CALL 0x1
#define DBG_MISC 0x2
#define DBG_ERROR 0x4

extern int slirp_debug;

#define DEBUG_CALL(fmt, ...) do {               \
    if (G_UNLIKELY(slirp_debug & DBG_CALL)) {   \
        g_debug(fmt "...", ##__VA_ARGS__);      \
    }                                           \
} while (0)

#define DEBUG_ARG(fmt, ...) do {                \
    if (G_UNLIKELY(slirp_debug & DBG_CALL)) {   \
        g_debug(" " fmt, ##__VA_ARGS__);        \
    }                                           \
} while (0)

#define DEBUG_MISC(fmt, ...) do {               \
    if (G_UNLIKELY(slirp_debug & DBG_MISC)) {   \
        g_debug(fmt, ##__VA_ARGS__);            \
    }                                           \
} while (0)

#define DEBUG_ERROR(fmt, ...) do {              \
    if (G_UNLIKELY(slirp_debug & DBG_ERROR)) {  \
        g_debug(fmt, ##__VA_ARGS__);            \
    }                                           \
} while (0)

#endif /* DEBUG_H_ */
