#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: the first input of the function.
 * @av: the second input of the funciton.
 * Return: returns ptr or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	int *ptr;

	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}
