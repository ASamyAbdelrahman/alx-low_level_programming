#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string.
 * @s: the first input of the function.
 * @c: the second input of the function.
 * Return: return c if it is found in the string
 *                 null if it is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (NULL);
}
