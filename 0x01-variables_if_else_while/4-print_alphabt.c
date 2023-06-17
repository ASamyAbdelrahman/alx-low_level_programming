#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

