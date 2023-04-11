#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy `str' and return pointer
 * @str: string to copy
 *
 * Return: pointer to copy of `str', or NULL on failure
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (str);

	for (i = 0; str[i]; ++i)
		;
	dup = (char*)malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (dup);
	for (j = 0; j <= i; ++j)
		dup[j] = str[i];
	return (dup);
}
