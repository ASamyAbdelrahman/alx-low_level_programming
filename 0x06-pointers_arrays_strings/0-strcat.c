#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: the first input of the function.
 * @src: the second input of the function.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *y = dest;

	while (*y != '\0')
	{
		++y;
	}
	while (*src != '\0')
	{
		*y = *src;
		++src;
		++y;
	}
	*y = '\0';
	return (dest);
}
