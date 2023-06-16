#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints the size of data types
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d\n", sizeof(char));
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %d\n", sizeof(long int));
	printf("Size of a long long int: %d\n", sizeof(long long int));
	printf("Size of a float: %d\n", sizeof(float));
	return (0);
}
