#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <sys/io.h>

#include <kernel/tty.h>

/**
 *
 * Initialize kernel
 *
 */
void kernel_init(void)
{
	terminal_initialize();
}

/**
 *
 * Main function of kernel
 *
 */
void kernel_main(void)
{
    char c;
	printf("Hello, kernel World!\n");
}
