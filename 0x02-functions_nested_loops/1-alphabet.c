#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print alphabets to the standard output
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
