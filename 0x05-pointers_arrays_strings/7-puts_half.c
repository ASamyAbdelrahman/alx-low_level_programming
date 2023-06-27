#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the input of the function.
 */

void puts_half(char *str)
{
	int length, i, n;
	char *y = str;

	length = 0;
	while (*y != '\0')
	{
		y++;
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
		for (i = 0; i <= (length - n); i++)
		{
			_putchar(str[n + i]);
		}
	}
	else
	{
		n = (length - 1) / 2;
		for (i = 0; i <= (length - n); i++)
		{
			_putchar(str[n + i + 1]);
		}
	}
	_putchar('\n');
}
