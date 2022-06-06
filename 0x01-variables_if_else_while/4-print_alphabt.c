#include <stdio.h>

/**
* main - lower case without q and e
*
*Description: this will write the lowercase alphabets without e and q
*
* Return: 0 is successful
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
			x++;
	}
	putchar(10);
	return (0);
}
