#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets on the screen 10 times.
 *
 * Return: Nothing
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		i++;
	}
}



