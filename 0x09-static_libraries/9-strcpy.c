#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src.
 * @dest: the first input of the function.
 * @src: the second input of the function.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int length, i;
	char *y = src;

	length = 0;
	while (*y != '\0')
	{
		y++;
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
