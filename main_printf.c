#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "printf.h"


int _printf(const char *format, ...)
{
    va_list ap;
    int i = 0, j = 0, len = 0;
    char *dest, *argstr;

    dest = malloc(sizeof(char) * 1500);

    if (dest == NULL)
        return (1);

    va_start(ap, format);
    while (format[i] != '\0')
    {

        if (format[i] == '%')
        {
            i++;
            // %c case
            if (format[i] == 'c')
            {
                dest[j] = (char)va_arg(ap, int);
                j++;
            }
             // %s case
            else if (format[i] == 's')
            {
                argstr = va_arg(ap, char*);
                 _strcpy(&dest[j], argstr);
                j += _strlen(argstr);
            }
            // %% case
            else if (format[i] == '%')
            {
                dest[j] = '%';
                j++;
            }
             // %d case
              else if (format[i] == 'd')
            {

            }
             // %i case
              else if (format[i] == 'i')
            {

            }
        }
        else
        {
            dest[j] = format[i];
            j++;
        }
        i++;
    }

    write(1, dest, j);
    va_end(ap);
    free(dest);
    return (j);
}


int main(void)
{
    char a = 'Z';

    char *str = "Beloved";
    int len = _printf("hello world %c %s %%\n", a, str);
    int len2 = printf("hello world %c %s %%\n", a, str);
    printf("%d", len);
    printf("%d", len2);

    return (0);
}