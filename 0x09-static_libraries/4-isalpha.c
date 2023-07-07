#include "main.h"
/**
 * _isalpha - utilizes the _putchar function to check
 *            if the output lowercase or uppercase.
 *
 * @c: checks input of the function
 *
 * Return: return 1 if `c` is lowercase or uppercase
 *         otherwise always 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

