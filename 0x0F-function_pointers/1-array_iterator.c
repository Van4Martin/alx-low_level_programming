#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates the elements of an array
 * @array: The arry
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; ++i)
		action(array[i]);
}

