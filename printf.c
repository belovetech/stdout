#include "printf.h"

int _printf(const char *format, ...)
{
    va_list args;
    char f;
    int (*prints)(va_list *);
    int i, len;
    va_start(args, format);
    
    /*
    char known_spec[] = {'c', 's', 'i', 'd', 'x', 'X',
                        'o', 'p', '%', 'l', 'e', 'E','g',
                        'G', 'f', 'h', 'L', 'u', 'n', 'b'};
    char b;
    */
    len = 0;
    for (i = 0; format[i] != '\0'; i++)
    {
       if (format[i] == '%' )
        {
            i++;  /* fast forward */
            f = format[i];

            if (f == '%' || format[i + 1] == '%')
            {
                len += write(1, "%", 1);
                continue;
            }
       
            prints = get_func(f);
            len += prints(&args);
        }
        else
        {
            len += write(1, &format[i], 1);
        }
    }
    va_end(args);
    return (len);
}
