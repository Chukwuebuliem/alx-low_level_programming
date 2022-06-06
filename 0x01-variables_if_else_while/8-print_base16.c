#include <stdio.h>

/**
* main - base 16 numbers
*
* Description: this will print base 16 numbers
*
* Return: 0 is successful
*/
int main(void)
{
	int a = '0';
	int b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar(10);
	return (0);
}
