#include <stdio.h>

/**
* main - print double digits
*
* Description: This will print double digits
*
* Return: 0 is successful
*/
int main(void)
{
	int a = 48;
	int b = 48;

	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			putchar(a);
			putchar(b);

			if (a < 56 || b < 57)
			{
				putchar(44);
				putchar(32);
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
