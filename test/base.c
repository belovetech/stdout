#include "main.h"

/**
 * get_func - checks specifiers and match
 * corresponding function
 * @s: format specifier
 * @*: va_list type
 * Return: number of characters takes by the callback function
 */

int (*get_func(char s))(va_list *)
{
	fmt_spec fmt[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_uint},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_hex},
	};

	int i;

	for (i = 0; i < 7; i++)
	{
		if (s == fmt[i].str)
			return (fmt[i].func);
	}
	return (NULL);
}
