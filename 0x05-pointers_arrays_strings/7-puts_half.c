#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the input of the function.
 */

void puts_half(char *str)
{
	int length, t, i, n;
	char *y = str;

	length = 0;
	t = 0;
	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (i = 0; i <= t; i++)
	{
		if (length % 2 == 0)
		{
			n = length / 2;
			_putchar(str[n + i]);
		}
		else
		{
			n = (length - 1) / 2;
			_putchar(str[n + i]);
		}
	}
	_putchar('\n');
}
