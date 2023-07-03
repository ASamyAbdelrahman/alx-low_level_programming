#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: the first input of the function.
 * @c: the second input of the function.
 * Return: return c if it is found in the string
 *                 null if it is not found.
 */

char *_strchr(char *s, char c)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
		{
			return (&s[counter]);
		}
	}
	return (0);
}
