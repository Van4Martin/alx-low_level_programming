#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string 
 * @s: string to  be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	// Base case:
	if (*s == '\0')
	{
		return;
	}
	// Recursive case:
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
