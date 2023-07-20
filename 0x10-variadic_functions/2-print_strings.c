#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (ptr != NULL)
		{
			printf("%s", va_arg(ptr, char*));
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		else
			printf("(nil)");
	}
	va_end(ptr);
	printf("\n");
}
