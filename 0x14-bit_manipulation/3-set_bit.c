#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * @n: pointer to input number
 * @index: position of bit
 * Return: 1 on (success) -1 on error
 */
int set_bit(uli *n, uni index)
{
	uli check_bit;

	if (index >= sizeof(uli) * 8)
	{
		return (-1);
	}

	check_bit = 1ul << index;
	*n |= check_bit;
	return (1);
}
