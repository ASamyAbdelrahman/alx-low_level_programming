#include <unistd.h>
/**
 * main - Entry point
 * Descripiton: A C program that prints with write function
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
