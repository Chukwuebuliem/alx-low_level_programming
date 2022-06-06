#include <stdio.h>

/**
* main - Lower case and upper case
*
* Description: this will print the lower case and upper case of alphabet
*
* Return: 0 is successful
*/
int main(void)
{
	int a = 97;
	int b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar(10);
	return (0);
}
