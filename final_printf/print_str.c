#include "printf.h"

int print_str(va_list *str)
{
    /* innitialize counter and len */
    char *newstr;
    int i, len = 0;

    char *s = va_arg(*str, char *);

    /* length of str */
    len = _strlen(s);

    /* Dnyamically allocate memory to our newstr */
    newstr = malloc(sizeof(char) * (len + 1));

    /* copy element of str to newstr */
    for (i = 0; s[i] != '\0'; i++)
    {
        newstr[i] = s[i];
    }

    /* add null terminator */
    newstr[i] = '\0';

    /* write to the std output */
    write(1, s, len);

    /* free heap memory */
    free(newstr);

    /* return length of newstr */
    return (len);
}
