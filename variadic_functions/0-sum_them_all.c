#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of it's params
 * @n: number of params
 * Return: sum of params
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int i, sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}