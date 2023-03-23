#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers to 98
 * @n: Starting number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		while (n >= 98)
		{
			putchar(n);
			n--;
		}
		_putchar(n);
		_putchar(',');
		n++;
	}
}
