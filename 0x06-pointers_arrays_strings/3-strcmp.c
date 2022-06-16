#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: is the first string
 * @s2: is the second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, b;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			b = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == s2[i])
		{
			b = 0;
		}
		i++;
	}
	return (b);
	_putchar('\n');
}
