#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - computes the value of x poer y
 * @x: number whose power is to be determined
 * @y: exponent
 *
 * Return: value of x rased to power y
 * -1, if y is less than 0
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
	{
	return ( x * _pow_recursion(x, y-1));
	}
}

	
