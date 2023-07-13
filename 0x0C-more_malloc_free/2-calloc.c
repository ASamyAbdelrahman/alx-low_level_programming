#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: the array of the function.
 * @size: the size of the elements of the array.
 * Return: returns ptr or NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
