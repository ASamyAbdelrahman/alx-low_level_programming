#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line.
 * @str: the input of the function.
 */

void puts2(char *str)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] % 2 == 0)
			_putchar(s[counter]);
		else
			continue;
	}
	_putchar('\n');
}
