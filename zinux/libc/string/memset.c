#include <string.h>

void *memset(void restrict bufptr, int value, size_t size)
{
    unsigned char *buf = (unsigned char *) dstptr;
    for(size_t i = 0; i < size; i++)
        buf[i] = (unsigned char) value;
    return bufptr;
}
