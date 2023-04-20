#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_number - printing numbers followed by a new line
 * @n: the number of intager to be passed on
 * @char: string to be printed betwwen numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int c = n;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	if (c--)
		printf("%d", va_arg(ap, int));
	while (c-- > 0)
		printf("%s%d", separator, va_arg(ap, int));
	putchar('\n');
	va_end(ap);
}

