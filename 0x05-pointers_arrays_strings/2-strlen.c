#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the input of the function.
 * Return: returns value.
 */

int _strlen(char *s)
{
	int value, i;

	for (i = 0; *(s + i) != '\0'; i++)
		value = i + 1;

	return (value);
}
