#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of parameters
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
