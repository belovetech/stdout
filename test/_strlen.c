#include "main.h"

/**
 * _strlen - finds the length of string
 * @str: String to find its length
 * Return: return the length
 */

int _strlen(char *str)
{
	int len = 0;

	if (!str)
		return (0);

	while (str[len] != '\0')
		len++;

	return (len);
}
