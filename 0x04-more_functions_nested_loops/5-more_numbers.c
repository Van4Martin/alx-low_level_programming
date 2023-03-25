#include <stdio.h>
#include "main.h>

/**
* more_numbers - Print numbers from 1 to 14, 10 times
* 
* Return: No value
*/
void more_numbers(void)
{
	int i = 0, j;

	while (i <= 10)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

