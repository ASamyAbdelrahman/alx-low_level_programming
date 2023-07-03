#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: the first input of the function.
 * @src: the second input of the function.
 * @n: the third input of the function.
 * @Return: retunrs dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
