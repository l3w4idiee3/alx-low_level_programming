#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function executing a function given as a par
 * @array: a pointer to the first element of an array of intergers
 * @size: the number of elementsin the array
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
