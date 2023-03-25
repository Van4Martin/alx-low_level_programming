#include <stdio.h>
#include "main.h"

/**
 * _isupper(int c) - Checks if c is upper
 * @c: integer to be checked
 *
 * Return: 1 (Success)
 * on error, return 0
 */
int _isupper(int c)
{
	char a = 'A';

	while (a <= 'Z')
	{
		if (a == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		a++;
	}
}
