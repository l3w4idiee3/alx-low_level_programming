#include "main.h"

/**
 * _sqrt_recursion - a function that return squareroot of natural number
 * @n: integer
 *
 * Return:_sqrt_recursion_helper(n, 1));
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 1));
}
