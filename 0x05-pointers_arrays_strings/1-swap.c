#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps the value of a with that of b
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return - nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
