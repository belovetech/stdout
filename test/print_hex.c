#include "main.h"
/**
 * print_hex - convert to hexadecimal
 * @p_int: arguement int
 * Return: Length of the converted integer
 */

int print_hex(va_list *p_int)
{
	int len;
	char tmp[20];

	unsigned int num = va_arg(*p_int, unsigned int);
	char *str = _itoa(num, tmp, 16);

	len = _strlen(str);
	write(1, str, len);

	return (len);
}

