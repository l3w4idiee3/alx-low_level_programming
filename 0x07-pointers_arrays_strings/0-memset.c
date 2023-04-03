#include "main.h"
#include <string.h>

/**
 * memset - fill char *s, char b, unsigned int n with constant byte
 * @s: memory to be appointed
 * @b: memory to be appointed
 * n: size of the byte
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr = b;
	}
	return (0);
}
