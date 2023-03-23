#include "main.h"

/**
 * 0-isupper - check whether c is on upperside or otherwise
 *@c: character to check
 *
 * Return: 1 if c is on uppercase or o otherwise
 */
int _isupper(int c);
{
	if (c >= "A" && c <= "z")
		return (1);
	return (0);
}


