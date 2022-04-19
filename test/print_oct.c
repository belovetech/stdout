#include "main.h"
/**
 * print_oct - convert to octal
 * @p_int: arguement int
 * Return: Length of the converted integer
 */

int print_oct(va_list *p_int)
{
	int len;
	char tmp[20];

	unsigned int num = va_arg(*p_int, unsigned int);
	char *str = _itoa(num, tmp, 8);

	len = _strlen(str);
	write(1, str, len);

	return (len);
}

