#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
		for (m = 0; m < 10; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');
			if (n == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
