#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int firstdigit, seconddigit;

	firstdigit = 0;
	while (firstdigit <= 99)
	{
		seconddigit = firstdigit;
		while (seconddigit <= 99)
		{
			if (seconddigit != firstdigit)
			{
				putchar((firstdigit / 10) + 48);
				putchar((firstdigit % 10) + 48);
				putchar(' ');
				putchar((seconddigit / 10) + 48);
				putchar((seconddigit % 10) + 48);
				if (firstdigit != 98 || seconddigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconddigit++;
		}
		firstdigit++;
	}
	putchar('\n');
	return (0);
}
