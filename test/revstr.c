#include "main.h"

/**
 * _revstr - Reverse string
 * @str: String to reverse
 * Return: Pointer to reverse string
 */

char *_revstr(char *str)
{
	int i, len;
	char ch;

	if (!str)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	for (i = 0; i < (len / 2); i++)
	{
		ch = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = ch;
	}
	return (str);
}
