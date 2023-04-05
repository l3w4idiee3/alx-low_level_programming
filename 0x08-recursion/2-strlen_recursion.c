#include "main.h"

/**
 * _strlen_recursion - printing the length of a string
 * @s: string to be determined its length
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
