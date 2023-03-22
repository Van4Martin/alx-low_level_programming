#include <stdio.h>
#include "main.h"

/** _islower - Checks if a character is lower or otherwise
 *
 * Return: 1 (Success) 0 (Otherwise)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

