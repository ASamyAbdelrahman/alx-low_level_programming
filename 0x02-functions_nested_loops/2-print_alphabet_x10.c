#inlcude "main.h"
/**
 * print_alphabet_x10 - utilizes the _putchar function to print
 *                      the alphabet a - z 10 times
 */

void print_alphabet_x10(void)
{
	int alphabet;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alphabet = 97; alphabet <= 122; alphabet++)
		_putchar(alphabet);
		_putchar('\n');
	}
}
