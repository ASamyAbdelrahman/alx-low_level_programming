#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line, to stdout.
 * @s: the input of the function
 */

void print_rev(char *s)
{
	int length, r;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (r = length; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
