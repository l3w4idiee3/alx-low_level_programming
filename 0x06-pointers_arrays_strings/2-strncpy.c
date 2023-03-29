#include "main.h"
#include <string.h>

/**
 * _strncpy - copy at most `n' characters from `src' into `dest'
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		dest = '\0';
		dest++;
		n--;
	}
	return (dest_start);
}
