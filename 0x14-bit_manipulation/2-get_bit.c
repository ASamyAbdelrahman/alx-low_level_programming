#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the integer number
 * @index: the index of the bit
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (((index > (8 * sizeof(n) - 1)) ? (-1) : (int)(n >> index & 1)));
}
