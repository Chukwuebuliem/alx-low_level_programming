#include "main.h"

/**
* print_line - printing lines
* @n: is an integer
* Description: this will print _ followed by a new line
* Return: void
*/
void print_line(int n)
{
	int a;

	a = 1;
	while (a <= n)
	{
		_putchar('_');
		a++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
