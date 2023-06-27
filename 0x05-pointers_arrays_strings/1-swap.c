#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the first input of the function.
 * @b: the second input of the function.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
