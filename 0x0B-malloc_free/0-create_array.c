#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of array.
 * @c: the character that initalizes to the array.
 * Return: returns ptr or return 0 if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *) malloc(size * sizeof(char));

	if (size != 0)
	{
		if (ptr != NULL)
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		else
			return (NULL);
	}
	else
		return (NULL);
	return (ptr);
}
