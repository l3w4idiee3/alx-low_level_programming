#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer as a string char by char
 * @n: int to print
 */
void print_number(int n)
{
	int digit, magnitude = 1;

	while (n / magnitude >= 10)
	{
		magnitude *= 10;
	}
	while (magnitude > 0)
	{
		digit = n / magnitude;
		putchar(digit +'\0');
		n %= magnitude;
		magnitude /= 10;
	}
}
