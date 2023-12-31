#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - checks if the number is a prime number or not.
 * @n: the number.
 * Return: returns 1 is the the input integer is a prime number
 *         otherwise returns 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculate if the number is prime recursively.
 * @n: number
 * @i: counter
 * Return: returns 1 is the the input integer is a prime number
 *         otherwise returns 0.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
