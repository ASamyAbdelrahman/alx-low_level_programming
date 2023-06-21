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
		_putchar(lastdigit + 48);
	}
	else
	{
		last_digit = digit % 10;
		_putchar(lastdigit + 48);
	}
}
