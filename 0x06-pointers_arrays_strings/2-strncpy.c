#include "main.h"

/**
 * _strncpy - coping a string
 * @dest: is a destination string
 * @src: a source string
 * @n: is the number of byte
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	b = a;
	for (b = a; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
	_putchar('\n');
}
