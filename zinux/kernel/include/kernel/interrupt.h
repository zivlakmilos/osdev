#ifndef _KERNEL_INTERRUPT_H
#define _KERNEL_INTERRUPT_H 1

/*
 *
 * Interrupt ports
 *
 */
static const char INT_PORT1         = 0x21;
static const char INT_PORT2         = 0xA1;

/*
 *
 * Interrupt values
 *
 */
static const char IRQ_TIMER         = 0x01;
static const char IRQ_KEYBOADR      = 0x02;
static const char IRQ_CASCADE       = 0x04;
static const char IRQ_COM24         = 0x08;
static const char IRQ_COM13         = 0x10;
static const char IRQ_LPT           = 0x20;
static const char IRQ_FLOPPY        = 0x40;
static const char IRQ_IRQ_7         = 0x80;

/*
 *
 * Setup interrupts
 *
 */
void setup_interrupts(void);

#endif
