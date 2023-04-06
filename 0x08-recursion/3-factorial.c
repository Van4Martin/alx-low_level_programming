#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of n
 * @n: The operand
 *
 * Return: factorial n (SUccess)
 * on error, -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return ( n * factorial(n - 1));
	}
}
