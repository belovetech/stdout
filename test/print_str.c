#include "main.h"

/**
 * print_str - Print string to the std output
 * @str: String printed out
 * Return: length of the string
 */

int print_str(va_list *str)
{
	char *newstr = NULL;
	int len = 0;

	/* assign the value of va_arg to s */
	char *s = va_arg(*str, char *);

	len = _strlen(s);

	newstr = _strcpy(newstr, s);

	write(1, s, len);

	free(newstr);
	return (len);
}

