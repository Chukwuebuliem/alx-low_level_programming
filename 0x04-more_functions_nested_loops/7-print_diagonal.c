#include "main.h"

/**
* print_diagonal - to print a number of diagonal lines and spaces
* @n: is an integer
* Description: this will print diagonal lines
* Return: is void
*/
void print_diagonal(int n)
{
	int a;
	int b;

	a = 1;

	while (a <= n)
	{
		b = 1;
		while (b <= a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
