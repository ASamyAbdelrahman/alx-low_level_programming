#include "main.h"
/**
 * print_alphabet - utilizes the _putchar function to print
 *                  the alphabet a - z
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
