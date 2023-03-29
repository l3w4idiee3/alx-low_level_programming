#include "main.h"

/**
 * string_toupper - convert lowercase letters to uppercase
 * @s: string to convert
 *
 * Return: pointer to `s'
 */
char *cap_string(char *str) 
{
	char *p = str;
	int cap_next = 1; // start by capitalizing the first letter
	while (*p != '\0') 
	{
	if (cap_next && islower(*p)) 
	{
		*p = toupper(*p);
	}
	cap_next = isspace(*p) || *p == ',' || *p == ';' || *p == '.' ||
		*p == '!' || *p == '?' || *p == '"' || *p == '(' ||
		*p == ')' || *p == '{' || *p == '}';
	p++;
	}
	return str;
}
