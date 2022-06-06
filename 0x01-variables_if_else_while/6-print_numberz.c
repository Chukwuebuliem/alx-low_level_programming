#include <stdio.h>

/**
* main - binary numbers
*
* Description: this will print binary numbers from 0 to 9
*
* Return: 0 is successful
*/
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
