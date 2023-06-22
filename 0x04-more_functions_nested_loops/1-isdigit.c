#include "main.h"
/**
 * _isdigit - A function that checks for digits from 0 to 9
 * @c: input of the function
 * Return:returns 1 if `c` is a digit
 *         otherwise returns 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
