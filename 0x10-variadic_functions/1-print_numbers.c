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
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	if (c)
	{
		s = va_arg(ap, char *);
		printf("%s", (s ? s : "(nil)"));
		--c;
	}
	while (c > 0)
	{
		s = va_arg(ap, char *);
		printf("%s%s", separator, (s ? s : "(nil)"));
		--c;
	}
	putchar('\n');
	va_end(ap); 
}
