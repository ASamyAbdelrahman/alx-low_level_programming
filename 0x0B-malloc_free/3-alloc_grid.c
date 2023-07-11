#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the first input of the function.
 * @height: the second input of the function.
 * Return: returns ptr or NULL if it fails.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (--i >= 0)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
