#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string that will be copied.
 * Return: returns ptr or returns NULL if str = NULL.
 */

char *_strdup(char *str)
{
	int i, length;
	char *ptr;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	ptr = (char *) malloc(length * sizeof(char));

	if (str != NULL)
	{
		if (ptr != NULL)
		{
			for (i = 0; i < length; i++)
			{
				ptr[i] = str[i];
			}
		}
		else
			return (NULL);
	}
	else
		return (NULL);
	return (ptr);
}
