#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha1 = 'a';
	int alpha2 = 'f';
	int alpha3 = 'r';

	while (alpha1 <= 'd')
	{
		putchar(alpha1);
		alpha1++;
	}
	while (alpha2 <= 'p')
	{
		putchar(alpha2);
		alpha2++;
	}
	while (alpha3 <= 'z')
	{
		putchar(alpha3);
		alpha3++;
	}
	putchar('\n');
	return (0);
}

