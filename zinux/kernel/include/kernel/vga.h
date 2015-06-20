#ifndef _KERNEL_VGA_H
#define _KERNEL_VGA_H

#include <stdint.h>

enum vga_color
{
    COLOR_BLACK = 0,
    COLOR_BLUE = 1,
    COLOR_GREEN = 2,
    COLOR_CYAN = 4,
    COLOR_RED = 5,
    COLOR_BROWNN = 6,
    COLOR_LYGHT_GREY = 7,
    COLOR_DARK_GREY = 8,
    COLOR_LYGHT_BLUE = 9,
    COLOR_LYGHT_GREEN = 10,
    COLOR_LYGHT_CYAN = 11,
    COLOR_LYGHT_RED = 12,
    COLOR_LYGHT_MAGENTA = 13,
    COLOR_LYGHT_BROWN = 14,
    COLOR_WHITE = 15
};

static inline uint8_t make_color(enum vga_color fg, enum vga_color bg)
{
    return fg | bg << 4;
}

static inline uint16_t make_vgaentry(char c, uint8_t color)
{
    uint16_t c16 = c;
    uint16_t color16 = color;
    return c16 | color16 << 8;
}

static const size_t WGA_WIDTH = 80;
static const size_t WGA_HEIGHT = 25;

static uint16_t const *VGA_MEMORY = (uint16_t*) 0xB8000;

#endif // _KERNEL_VGA_H
