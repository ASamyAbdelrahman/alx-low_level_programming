#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int n1, n2, n3, i, j, z;

	i = 1;
	z = 1;
	for (n1 = 48; n1 <= 57; n1++)
	{
		n2 = 48;
		n2 = n2 + i;
		j = 1;
		for (; n2 <= 57; n2++)
		{
			n3 = 48;
			n3 = n3 + j + z;
			for (; n3 <= 57; n3++)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (i != 8 && z != 9 && j != 9)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			z++;
			i++;
		}
	}
		putchar('\n');
		return (0);
}
