#include <stdio.h>

/**
* main - single digits
*
*Descriptions: this will print numbers with comma and space
*
* Return: 0 is successful
*/
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar(10);
	return (0);
}
