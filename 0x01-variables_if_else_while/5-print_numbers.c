#include <stdio.h>

/**
* main - numbers followed by a new line
*
* Description: this will write numbers followed by a new line
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

