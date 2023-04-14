#include <stdlib.h>
#include "main.h"
/**
 * array_range - caldjd
 * @min: sdhsh
 * @max: hsgsdh
 * Return: jfjs
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
