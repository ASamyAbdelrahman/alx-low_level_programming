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
	int last_digit;

	if (digit < 0)
	{
		last_digit = (-1 * digit) % 10;
		_putchar(last_digit + 48);
		return (last_digit);
	}
	else
	{
		last_digit = digit % 10;
		_putchar(last_digit + 48);
		return (last_digit);
	}
}
