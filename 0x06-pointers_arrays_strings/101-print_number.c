#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_number - print an integer as a string char by char
 * @n: int to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

