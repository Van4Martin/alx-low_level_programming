#include <stdlib.h>
#include "main.h"

/**
 * _calloc - jsfjsjs
 * @nmemb: hfshsh
 * @size: fushsdh
 *
 * Return: sds
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total, i;
	void *result;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;
	result = malloc(total);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total; i++)
	{
		((char *)result)[i] = 0;
	}
	return (result);
}
