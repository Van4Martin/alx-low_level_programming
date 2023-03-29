#include <stdio.>
#include "main.h"

/**
 * _puts - prints strings to the stdout
 * @str: characters to be printed
 *
 * Return: Nothin
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
