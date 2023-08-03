#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to unsigned long integer
 * @index: the index at which the bit will be set at 1
 * Return: 1 on (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
