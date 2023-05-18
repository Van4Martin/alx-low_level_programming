#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input number
 * @index: position of bit to be returned
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	uli check_bit = 1ul << index;

	if (index >= sizeof(uli) * 8)
	{
		return (-1);
	}
	if (n & check_bit)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
