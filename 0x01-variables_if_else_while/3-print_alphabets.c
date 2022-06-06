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
	char a = 'a';
	char b = 'A';

	do {
		putchar(a);
		a++;
	} while (a <= 'z');
	do {
		putchar(b);
		b++;
	} while (b <= 'z');
	putchar('\n');
	return (0);
}
