#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 * @digit: checks the input of the function
 *
 * Return: returns last_digit
 */

int print_last_digit(int digit)
{
	char last_digit;

	last_digit = digit % 10;
	_putchar('last_digit');
	return (last_digit);
}
