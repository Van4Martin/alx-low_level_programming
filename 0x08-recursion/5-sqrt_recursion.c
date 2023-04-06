#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of n
 * @c: operand
 * 
 * Return: square root
 * -1 if root is not a real number
 */
int _sqrt(int n, int start, int end)
{
	int mid;
	if (start > end)
	{
		return (-1);
	}

	mid = start + (end - start) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt(n, start, mid + 1, end));
	}
	else
	{
	return (_sqrt(n, start, mid - 1, end));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(n, 0, n));
	}
}	
