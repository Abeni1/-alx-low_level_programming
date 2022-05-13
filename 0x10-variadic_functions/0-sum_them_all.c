#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all passed parameters.
 * @n: arguments
 *
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parameter_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	
	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(parameter_list,int);

	va_end(parameter_list);

	return (sum);
}
