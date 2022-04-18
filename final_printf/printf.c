#include "printf.h"

int _printf(const char *format, ...)
{
    va_list args;
    char f;
    int (*prints)(va_list *);
    int i, len;
    va_start(args, format);

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

int main(void)
{
    int ret;
    ret = _printf("%c %% %d %o %x %s\n", 'A', 10, 100, 1000, "Hello from printf!");
    printf("printf returns %d bytes\n", ret);

    return 0;
}