#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @a: the input of the function.
 * Return: a
 */

char *leet(char *a)
{
	int i, j;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == x[j])
			{
				a[i] = y[j];
			}
		}
	}

	return (a);
}

