#include <stdio.h>

/**
* main - lower case alphabet
*
* Description: this will print all the alphabets in lower case
*
* Return: 0 is successful
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}

