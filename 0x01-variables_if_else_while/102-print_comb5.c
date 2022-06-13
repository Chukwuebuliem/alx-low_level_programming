#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this will print double digits in pairs
 *
 * Return: 0 is successful
 */
int main(void)
{
	int w = 48;
	int x = 48;
	int y = 48;
	int z = 48;

	while (w < 58)
	{
		while (x < 58)
		{
			z = x + 1;
			y = w;
			while (y < 58)
			{
				while (z < 58)
				{
					putchar(w);
					putchar(x);
					putchar(32);
					putchar(y);
					putchar(z);
					if (w < 57 || x < 56 || y < 57 || z < 57)
					{
						putchar(44);
						putchar(32);
					}
					z++;
				}
				z = 48;
				y++;
			}
			x++;
		}
		w++;
	}
	putchar('\n');
	return (0);
}
