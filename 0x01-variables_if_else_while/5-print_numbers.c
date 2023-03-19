#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num = num + 1;
	}
	{
		putchar('\n');
	}
	return(0);
}
