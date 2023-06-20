#include "main.h"

/**
 * main - check the code
 * Description: prints alphabet in lowercase
 * Return: Always 0.
 */

void print_alphabet(void)
{
	for (int alphabet = 97; alphabet <= 122; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
