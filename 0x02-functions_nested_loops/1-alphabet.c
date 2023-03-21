#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int  main(void)
{
	void print_alphabet(void)
	{
		int n = 'a';

		while(n <= 'z')
		{
			putchar(n);
			n++;
		}
		putchar('\n');
		return;
	}
	print_alphabet();
	return (0);
}
