#include "main.h"

/**
 * binary_to_uint - converts from binary to unsigned int
 * @b: pointer to string
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			converted <<= 1;
		}
		else if (b[i] == '1')
		{
			converted = (converted << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (converted);
}
