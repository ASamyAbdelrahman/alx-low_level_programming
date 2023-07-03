#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the first string.
 * @accept: the second string.
 * Return: returns n.
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter, j;
	unsigned int n;

	n = 0;
	for (counter = 0; accept[counter] != '\0' ; counter++)
	{
		for (j = 0; s[j] != ','; j++)
		{
			if (s[j] == accept[counter])
				n++;
		}
	}
	return (n);
}
