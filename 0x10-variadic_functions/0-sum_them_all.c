#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the parameters passed to a function
 * @n: parameters begin
 * ...: unknown parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	if (n == 0)
	{
		return (0);
	}
	return (sum);
}
