#include "main.h"

/**
 * _strstr - function that finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *chaystack;
	char *dneedle;

	while (*haystack != '\0')
	{
		chaystack = haystack;
		dneedle = needle;
		while (*haystack != '\0' && *dneedle != '\0' && *haystack == *dneedle)
		{
			haystack++;
			dneedle++;
		}
		if (!*dneedle)
			return (chaystack);
			haystack = chaystack + 1;
	}
	return (0);
}
