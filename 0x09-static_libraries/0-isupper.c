#include "main.h"
/**
 * _isupper - utilizes the _putchar function to check
 *            if the output uppercase.
 *
 * @c: checks input of the function
 *
 * Return: return 1 if `c` is uppercase
 *         otherwise always 0 (success)
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
