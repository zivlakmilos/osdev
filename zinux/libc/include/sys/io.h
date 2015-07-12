#ifndef _SYS_IO_H
#define _SYS_IO_H 1

/**
 *
 * Send value to port
 *
 */
static __inline void outb(unsigned char value, unsigned short int port)
{
    asm volatile("outb %b0, %w1": :"a" (value), "Nd" (port));
}

/**
 *
 * Get value from port
 *
 */
static __inline unsigned char inb(unsigned short int port)
{
    unsigned char ret;
    asm volatile("inb %w1, %0" : "=a" (ret) : "Nd" (port));
    return ret;
}

#endif
