#include <stdio.h>
#include "main.h"

/**
* print_line - Prints linres on the console
*
* Return: Nothing
*/
void print_line(int n)
{
	int x;
	
	x = 0;
	while (x <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		x++;
	}
	_putchar('\n');
}	
