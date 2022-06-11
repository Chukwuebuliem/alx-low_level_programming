#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9 except 2 and 4
* Description: this will print numbers from 0 to 9 except 2 and 4
* Return: integers from 0 to 9 except 2 and 4
*/
void print_most_numbers(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n++;
	}
}
