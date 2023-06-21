#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: check the input of the function
 */

void print_to_98(int n)
{
	int i, add;

	for (i = 0; i <= 98 - n; i++)
	{
		add = n + i;
		if (add < -9)
		{
			_putchar('-');
			_putchar(-1 * (add / 10) + 48);
			_putchar(-1 * (add % 10) + 48);
		}
		if (add >= -9 && add < 0)
		{
			_putchar('-');
			_putchar((-1 * add) + 48);
		}
		if (add >= 0)
		{
			if (add <= 9)
			{
				_putchar(add + 48);
			}
			else
			{
				_putchar((add / 10) + 48);
				_putchar((add % 10) + 48);
			}
		}
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
