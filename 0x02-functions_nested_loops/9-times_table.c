#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Nothiong
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				print_number(result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				print_number(result);
			}
		}
		_putchar('\n');
	}
}

void print_number(int n)
{
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
