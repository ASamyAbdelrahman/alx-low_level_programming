#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array of the function.
 * @n: the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int rev = a[0];
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
