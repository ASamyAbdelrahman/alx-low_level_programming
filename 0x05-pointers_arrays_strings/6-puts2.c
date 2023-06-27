#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length, t, o;
	char *y = str;

	length = 0;
	t = 0;
	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
