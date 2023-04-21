#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - hfhsfh
 * @array: jsjfj
 * @size: jusjs
 * @cmp: jsjs
 * Return: hfhfh
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
