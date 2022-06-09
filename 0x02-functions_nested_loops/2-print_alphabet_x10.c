#include "main.h"

/**
 *  *void print_alphabet_x10(void) - print alphabet x10
 *   *
 *    *Return: Always 0.
*/
print_alphabet_x10(void)
{
	int c;

	for (c = '0'; c < '10'; c++)
	{
		int d;

		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
	return (0);
}
