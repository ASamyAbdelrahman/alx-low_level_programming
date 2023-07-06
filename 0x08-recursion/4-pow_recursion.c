#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the number.
 * @y: the power of the number.
 * Return: returns -1 if the power is less than zero
 *                 num if the power is greater than zero.
 */

int _pow_recursion(int x, int y)
{
	int num;

	num = 0;
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
	{
		num = x * _pow_recursion(x, y - 1);
	}
	return (num);
}
