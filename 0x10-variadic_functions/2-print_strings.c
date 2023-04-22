#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - hdfhs
 * @separator: jsfjsj
 * @n: shsusu
 *
 * Return: Nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
	if (separator != NULL && i != n - 1)
	printf("%s", separator);
	va_end(arg);
	printf("\n");

	}
}
