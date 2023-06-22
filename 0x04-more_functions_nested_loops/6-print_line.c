#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the input of the function
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
