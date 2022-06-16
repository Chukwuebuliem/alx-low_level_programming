#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (b = 0; b < n; b++)
	{
		dest[i] = src[b];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	_putchar('\n');
}

