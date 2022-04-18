#include <unistd.h>
#include "printf.h"


int print_char(va_list *c)
{
    char ch = va_arg(*c, int);
    int i = sizeof(ch);
    write(1, &ch, i);
    return (i);
}
