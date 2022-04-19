#include "main.h"

/**
 * _strcpy - copies from src to dest
 * @dest: destination
 * @src: source
 * Return: Pointer to the address of dest
 */


char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
