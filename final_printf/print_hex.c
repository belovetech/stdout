#include "printf.h"

int print_hex(va_list *p_int)
{
    int len;
    char tmp[20];

    int num = va_arg(*p_int, int);
    char *str = _itoa(num, tmp, 16);

    len = _strlen(str);
    write(1, str, len);

    return (len);
}