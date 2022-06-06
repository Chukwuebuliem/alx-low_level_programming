#include <stdio.h>

/**
* main - lower case alphabets in reverse
*
* Description: this will print the lower case alphabets in reverse
*
* Return: 0 is successful
*/
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
