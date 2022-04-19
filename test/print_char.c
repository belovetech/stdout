#include "main.h"

/**
 * print_char - print character to a std output
 * @c: arguement of char type
 * Return: length of a character
 */

int print_char(va_list *c)
{
	char ch;
	int i;

	ch = va_arg(*c, int);
	i = sizeof(ch);

	write(1, &ch, i);
	return (i);
}
