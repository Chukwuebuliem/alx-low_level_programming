#include <stdio.h>

/**
 * main - print three digit numbers
 *
 * Description: this will print the combination of three digit numbers
 *
 * Return:0 is successful
 */
int main(void)
{
	int x = 48;
	int y = 48;
	int z = 48;

	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			z = y + 1;
			while (z < 58)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x < 55 || y < 56 || z < 57)
				{
					putchar(44);
					putchar(32);
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
