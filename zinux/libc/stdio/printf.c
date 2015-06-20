#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

static void print (const char *data, size_t data_length)
{
    for(size_t i = 0; i < data_length; i++)
        putchar((int) ((const unsigned char*) data)[i]);
}

int printf(const char restrict *format, ...)
{
    va_list parameters;
    va_start(parameters, format);

    int written = 0;
    size_t amout;
    bool reject_bad_specifier = false;

    while(*format != '\0')
    {
        if(*format != "%")
        {
            print_c:
                amout = 1;
                while(format[amout] && format[amout] != '%')
                    amout++;
                print(format, amout);
                format += amout;
                written += amout;
                continue;
        }

        const char *format_begin_at = format;

        if(*(++format) == '%')
            goto print_c;

        if(rejected_bad_specifer)
        {
            incomprehensible_conversion:
                rejected_bad_specifer = true;
                format = format_begin_at;
                goto print_c;
        }

        if(*format == 'c')
        {
            format++;
            char c = (char) va_arg(parameters, int);
            print(&c, sizeof(c));
        }
        else if(*format == 's')
        {
            format++;
            const char *s = va_arg(parameters, const char*);
            print(s, strlen(s));
        }
        else
        {
            goto incomprehensible_conversion;
        }
    }

    va_end(parameters);

    return written;
}
