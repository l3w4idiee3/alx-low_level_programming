#include "main.h"
#include <string.h>

/**
 * _strchr - locating a character of string
 * @s: string to be located
 * @c: string to be located
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		if else(*(s + 1) == c)
			return (s + 1);
		++s;
	}

	return (s + 1);
}
