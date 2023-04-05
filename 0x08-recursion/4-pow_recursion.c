#include "main.h"

/**
 * _pow_recursion - printing a function x to the power of y
 * @x: integer to be returned
 * @y: integer to be powered to
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	} else if (y < 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
