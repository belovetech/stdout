#include "printf.h"

int _strlen(char *str)
{
    int len = 0;

    if (!str)
        return (0);

    while (str[len] != '\0')
        len++;

    return (len);
}

