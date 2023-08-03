#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary number
 * Return: the unsigned integer number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, base;
	int len, counter;

	n = 0;
	base = 1;
	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	for (counter = len - 1; counter >= 0; counter--)
	{
		if (b[counter] == '0' || b[counter] == '1')
		{
			n = n + ((unsigned int) b[counter] - 48) * base;
			base = base * 2;
		}
		else
			return (0);
	}
	return (n);
}
