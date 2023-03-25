#include <stdio.h>
#include "main.h"

/**
 * _isdigit(int c) - checks if c is a digit
 * @c: integer to be checked
 *
 * Return: 1 is c is digit
 * not digit, returns 0
 */
int _isdigit(int c)
{
	char n = '0';

	while (n <= '9')
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		n = n + 1;
	}
}
