#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_i - prints int
 * @ap: arguement of list
 * @s: seperator
 * Return: none
 */
void print_i(char *s, va_list ap)
{
	printf("%s%d", s, va_arg(ap, int));
}
/**
 * print_c - prints char
 * @ap: arguement char
 * @s: seperator
 */
void print_c(char *s, va_list ap)
{
	printf("%s%c", s, va_arg(ap, int));
}
/**
 * print_s - prints string
 * @s: seperator
 * @ap: list to print
 * Return: none
 */
void print_s(char *s, va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", s, str);
}
/**
 * print_f - prints floats
 * @s: float to print
 * @ap: next arguement of list to print
 * Return: none
 */
void print_f(char *s, va_list ap)
{
	printf("%s%f", s, va_arg(ap, double));
}
/**
 * print_all - prints out all stuff
 * @format: format is list of types of arguements
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep;
	int i, j;
	token_t tokens[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(ap, format);
	i = 0;
	sep = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sep, ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
