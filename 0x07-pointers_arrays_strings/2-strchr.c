#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to a character aka the character found
 */
char *_strchr(char *s, char c)
{
	int counter;

	for (counter = 0; s[counter] != '\0' ; counter++)
	{
		if (s[counter] == c)
		return (&s[counter]);
	}
	return (0);
}
