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
	int x;

	for (x = 'a'; x <= 'z'; x++);
	{
		putchar(x);
		putchar('\n');
	}
	return (0);
}

