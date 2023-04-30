#include <stdio.h>

/**
 * main - ENtry point.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 100; i++)
	{
		k = i / 10;
		l = i % 10;

		for (j = i + 1; j < 100; j++)
		{
			if (j != i)
			{
				putchar(k + '0');
				putchar(l + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (i != 98 || j != 99)
				{
					putchar (',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
