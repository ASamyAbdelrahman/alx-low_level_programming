#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: the first input of the function.
 * @n: the second input of the function.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
