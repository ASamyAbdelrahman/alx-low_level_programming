#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the input of the function
 */

void print_triangle(int size)
{
	int i, j, z;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i  ; j--)
			{
				_putchar(' ');
			}
			for (z = 1; z <= i; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
