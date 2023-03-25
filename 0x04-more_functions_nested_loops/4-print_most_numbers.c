#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 - 9, except 2 and 4
 *
 * Return: No value
 */
void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num == '2' && num == '4')
		{
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
