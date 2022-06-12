#include "main.h"

/**
* print_numbers - prints numbers from 0 to 14 followed by a new line
* Description: this will print numbers from 0 to 14 ten times
* Return: integers from 0 to 14 ten times
*/
void more_numbers(void)
{
	int n;
	int m;
	int r

	n = '0';
	m = '10';
	r = '1';

	while (r <= '10')
	{
		if (n >= '0' && n <= '9')
		{
			_putchar(n);
			n++;
		}
		if (m >= '10' && m <= '14')
		{
			_putchar(m);
			m++;
		} 

	}
	_putchar('\n');
}
