#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: count
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
