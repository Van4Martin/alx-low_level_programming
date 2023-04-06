#include <stdio.h>
#include "main.h"

/**
 * is_prime - check if n is prime
 * @n: number to be checked
 *@c: iterator
 * Return: 1 if number is prime
 * not prime, return 0
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - yji guiihh
 * @n: uwhwhiwidh dhwiow
 * 
 * Return: 1 for prime if not 0
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
