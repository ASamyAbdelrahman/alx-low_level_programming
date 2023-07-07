#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: append to string
 * @src: append from string
 * @n: the number of appending
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int counter;
	char *y = dest;

	counter = 0;
	while (*y != '\0')
	{
		++y;
	}
	while (*src != '\0' && counter < n)
	{
		*y = *src;
		++src;
		++y;
		++counter;
	}
	*y = '\0';
	return (dest);
}
