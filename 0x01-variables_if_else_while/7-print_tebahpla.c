#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha = alpha - 1;
	}
	{
		putchar('\n');
	}
	return (0);
}
