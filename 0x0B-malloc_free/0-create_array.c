#include "main.h"
#include <stdlib.h>

/**
 * create_array -create array of characters initialized to `c'
 * @unsigned int size: size to be determined
 * @c: array of characters
 * @size: size of array
 *
 * Return: NULL or a *ptr
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)

		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
