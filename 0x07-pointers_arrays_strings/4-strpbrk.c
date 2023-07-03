#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: the first string.
 * @accept: the second string.
 * Return: returns a pointer to the byte in s that matches one of the bytes in accept
 *                 or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int counter, j;

	for (counter = 0; s[counter] != '\0' ; counter++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[counter] == accept[j])
				return (&s[counter]);
		}
	}
	return (0);
}
