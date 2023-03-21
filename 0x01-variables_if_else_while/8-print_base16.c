#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
