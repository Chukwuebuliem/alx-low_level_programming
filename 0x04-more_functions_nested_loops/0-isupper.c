#include "main.h"

/**
* _isupper - functions that check for uppercase
* @c: is an integer or a character
*
* Return: 0 or 1
*/
int _isupper(int c)
{
	c = 'A';

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
