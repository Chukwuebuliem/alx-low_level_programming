#include "main.h"

/**
* print_numbers - prints numbers from 0 to 9 followed by a new line
* Description: this will print numbers from 0 to 9
* Return: integers from 0 to 9
*/
void print_numbers(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
