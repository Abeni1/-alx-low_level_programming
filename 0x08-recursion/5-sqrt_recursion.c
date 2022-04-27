#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_operation(n, 1));
}

/**
 * _sqrt_operation - _sqrt_recursion.
 * @n: input number.
 * @i: integer parameter.
 * Return: sqrt.
 */
int _sqrt_operation(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_operation(n, i + 1));
}
