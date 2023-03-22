#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if character c is alphabetic
 * @c: character to be checked
 *
 * Return: 1 (Success)
 * On error, 0 is returned
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		if (c > 96 && c < 123)
		{
			return (1);
		}
		else 
		{
			return (0);
		}
	{
		return (1);
	}
	else
	{
		return (0);
	}
	}
}
