#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha1 = 'a';
	char alpha2 = 'A';

	while (alpha1 <= 'z')
	{
		putchar(alpha1);
		alpha1 = alpha1 + 1;
	}
	while (alpha2 <= 'Z')
	{
		putchar(alpha2);
		alpha2 = alpha2 + 1;
	}
	{
		putchar('\n');
	}
	return (0);
}
