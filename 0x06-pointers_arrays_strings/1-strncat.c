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
	int length, i;
	char *y = dest;

	i = 0;
	length = 0;
	while (*y != '\0')
	{
		++y;
		length++;
	}
	if (n >= 98 - length)
	{
		for (i = 0; i < 98 - length; i++)
		{
			*y = src[i];
			y++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			*y = src[i];
			y++;
		}
	}
	return (dest);
}
