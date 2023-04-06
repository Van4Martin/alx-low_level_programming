#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - check if n is prime
 * @n: number to be checked
 *
 * Return: 1 if number is prime
 * not prime, return 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
	{
		return (n == 2) ? 1 : 0;
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_number(int n);
}
