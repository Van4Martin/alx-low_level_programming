#include <stdio.h>
#include "main.h"

/**
 * print_sign - Print sign of character
 * @n: number whose sign to be printed
 *
 * Return: 1 or 0
 * result, dependent
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
