#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: position of bit to be cleared
 *
 * Return: 1 on success and -1 for falure
 */
int clear_bit(uli *n, uni  index)
{
	uli check_bit;

	if (index >= sizeof(uli) * 8)
	{
		return (-1);
	}
	check_bit = ~(1ul << index);
	*n = *n & check_bit;
	return 1;
}
