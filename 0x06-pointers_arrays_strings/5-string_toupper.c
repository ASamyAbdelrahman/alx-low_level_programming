#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: the input of the function.
 * Return: a.
 */

char *string_toupper(char *a)
{
	int length = 0;
	char *y = a;
	int i = 0;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
