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
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(ptr + i) = min;
	return (ptr);
}
