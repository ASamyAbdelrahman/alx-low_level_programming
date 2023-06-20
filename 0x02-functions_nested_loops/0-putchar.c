#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar using _putchar prototype
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet[] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(alphabet[i]);
	_putchar('\n');
	return (0);
}
