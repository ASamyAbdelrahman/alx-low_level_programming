#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the input of the function.
 */

int _strlen(char *s)
{
	int value;

	value = sizeof(*s) / sizeof(*(s + 1));

	return (value);
}
