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
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(m + i) = 0;
	return ((void *)m);
}
