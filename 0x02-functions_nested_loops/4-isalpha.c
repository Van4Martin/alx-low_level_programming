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

	if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
