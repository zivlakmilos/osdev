#include <stdio.h>

int puts(const char *string)
{
    return printf("%c\n", string);
}