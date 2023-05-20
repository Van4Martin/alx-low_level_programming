#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first input number
 * @m: second input number
 *
 * Return: Number of bits
 */
uni flip_bits(uli n, uli m)
{
	uli result = n ^ m;
	uni counter = 0;

	while (result != 0)
	{
		counter += result & 1;
		result >>= 1;
	}
	return (counter);
}
