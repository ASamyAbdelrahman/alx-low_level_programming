#include "main.h"
/**
 * print_sign - utilizes the _putchar function to check
 *            if the output greater or less or equal to zero.
 *
 * @n: checks input of the function
 *
 * Return: return 1 if `n` is greater than zero
 *         return 0 if `n` is equal to zero
 *         return -1 if `n` is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
