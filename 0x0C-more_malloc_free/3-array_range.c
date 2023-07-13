#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: the first input of the function.
 * @max: the second input of the function.
 * Return: returns ptr or NULL if it fails.
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
