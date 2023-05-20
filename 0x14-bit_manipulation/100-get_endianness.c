#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: Nothing
 */
int get_endianness(void)
{
	uni initVal = 0x01;
	unsigned char *ptr;

	ptr = (unsigned char *)&initVal;

	if (ptr[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
