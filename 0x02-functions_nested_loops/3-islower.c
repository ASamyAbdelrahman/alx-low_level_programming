#include "main.h"
/**
 * _islower - utilizes the _putchar function to check
 *            if the output lowercase or not.
 *
 * @c: checks input of the function
 *
 * Return: return 1 if `c` is lowercase
 *         otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
