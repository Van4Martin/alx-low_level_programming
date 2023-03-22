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
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
