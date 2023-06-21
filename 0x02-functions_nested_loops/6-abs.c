#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @num: checks the input of the funciton
 *
 * Return: return -1 * num if the num if negative
 *         return num if the num if positive
 */

int _abs(int num)
{
	if (num < 0)
		return (-1 * num);
	else
		return (num);
}
