#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
