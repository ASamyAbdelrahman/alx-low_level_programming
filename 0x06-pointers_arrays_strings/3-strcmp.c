#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first array.
 * @s2: the second array.
 * Return: value
 */

int _strcmp(char *s1, char *s2)
{
	int value, i;

	value = 0;
	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		value = 0;
	else if (s1[i] != '\0' && s2[i] != '\0')
		value = s1[i] - s2[i];

	return (value);
}

