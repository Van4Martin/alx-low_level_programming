#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n = 'a';

	while(n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	return;
}
