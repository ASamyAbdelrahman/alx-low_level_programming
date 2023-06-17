#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to determine the last digit
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit = n % 10;

	printf("Last digit of %d is ", n);
	if (lastdigit > 5)
		printf("%d and is greater than 5\n", lastdigit);
	if (lastdigit == 0)
		printf("%d and is 0\n", lastdigit);
	if (lastdigit < 6 && lastdigit != 0)
		printf("%d and is less than 6 and not 0\n", lastdigit);
	return (0);
}
