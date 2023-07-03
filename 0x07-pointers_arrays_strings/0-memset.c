#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: the first input of the function.
 * @b: the second input of the function.
 * @n: the third input of the function.
 * Return: returns s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
