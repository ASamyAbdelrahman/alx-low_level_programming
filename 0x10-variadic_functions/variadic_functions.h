#ifndef VARFUNC
#define VARFUNC
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct token - Struct operators
 *
 * @token: Char
 * @f: The function associated
 */
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

#endif
