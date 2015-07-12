#ifndef _STDIO_H
#define _STDIO_H 1

#include <sys/cdefs.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 *
 * Standard printf function in C
 *
 */

int printf(const char* __restrict, ...);

/**
 *
 * Put one character to display
 *
 */

int putchar(int);
/**
 *
 * Put string to display
 *
 */

int puts(const char*);

#ifdef __cplusplus
}
#endif

#endif
