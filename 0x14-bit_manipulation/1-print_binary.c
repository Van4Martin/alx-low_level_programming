#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number input
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int check_bit;

	if (n == 0)
	{
		printf("0");
		return;
	}
	check_bit =  ~(~0ul >> 1);

	while ((n & check_bit) == 0)
	{
		check_bit >>= 1;
	}

	while (check_bit > 0)
	{
		if (n & check_bit)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		check_bit >>= 1;
	}
}
