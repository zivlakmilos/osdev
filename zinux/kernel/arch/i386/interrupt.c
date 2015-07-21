#include <kernel/interrupt.h>

void setup_interrupts(void)
{
    // Enable timer and keyboadr interrupts
    outb(INT_PORT1, ~(IRQ_TIMER || IRQ_KEYBOARD));
    outb(INT_PORT2, ~0x00);
}
