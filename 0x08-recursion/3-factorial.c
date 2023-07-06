#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number of the factorial.
 * Return: returns -1 if the number is negative or 1 if the number is 0
 *         otherwise returns sum.
 */

int factorial(int n)
{
	int sum;

	sum = 0;
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n > 0)
	{
		sum = n * factorial(n - 1);
	}
	return (sum);
}
