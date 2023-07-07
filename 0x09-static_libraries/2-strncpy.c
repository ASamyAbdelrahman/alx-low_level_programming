#include "main.h"

/**
 * *_strncpy - concatenates two strings.
 * @dest: append to string
 * @src: append from string
 * @n: the number of appending
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	counter = 0;
	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
		++counter;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
