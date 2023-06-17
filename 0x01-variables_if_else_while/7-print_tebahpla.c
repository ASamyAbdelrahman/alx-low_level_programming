#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch <= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
