#include "main.h"
#include <string.h>

/**
 * print_rev - print a string, followed by a new line
 *
 * @s: a pointer to a null-terminated string to output
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
