#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x;
	unsigned int suma, sumb;

	suma = 0;
	sumb = 0;

	for (x = 0; x < size; x++)
	{
		suma += a[(size * x) + x];
		sumb += a[(size * (x + 1)) - (x + 1)];
	}
	printf("%d, %d\n", suma, sumb);
}
