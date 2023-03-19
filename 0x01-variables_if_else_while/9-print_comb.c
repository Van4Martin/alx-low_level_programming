#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry POint
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while ( n <= 57)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}


