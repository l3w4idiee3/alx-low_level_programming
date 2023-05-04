#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert string representation of binary number to uint
 * @b: string to convert
 *
 * Return: the converted number, or 0 if `b' is NULL or contains
 * symbols besides 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i;

	if (b == NULL)
	       return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
	{
		if (b[i] == '1')
			result += base;
		else if (b[i] != '0')
			return (0);
		base *=2;
	}
	
	return (result);
}	
