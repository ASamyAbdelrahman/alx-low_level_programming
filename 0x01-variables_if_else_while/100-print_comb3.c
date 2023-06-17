#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int n1, n2, i;

	i = 1;
	for (n1 = 48; n1 <= 57; n1++)
	{
		n2 = 48;
		n2 = n2 + i;
		for (; n2 <= 57; n2++)
		{
			putchar(n1);
			putchar(n2);
			if (i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
