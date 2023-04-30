#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints all the times of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hr, min;
	char h1, h2, m1, m2;

	for (hr = 0; hr < 24; hr++)
	{
		h1 = hr / 10 + '0';
		h2 = hr % 10 + '0';
		for (min = 0; min < 60; min++)
		{
			m1 = min / 10 + '0';
			m2 = min % 10 + '0';

			_putchar(h1);
			_putchar(h2);
			_putchar(':');
			_putchar(m1);
			_putchar(m2);
			_putchar('\n');
		}
	}
}
