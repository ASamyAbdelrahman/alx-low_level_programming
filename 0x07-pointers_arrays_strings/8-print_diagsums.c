#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: the string of the function.
 * @size: the second input of the function.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int m1 = 0;
	int m2 = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		m1 += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		m2 += a[i];
	}

	printf("%d, %d\n", m1, m2);
}
