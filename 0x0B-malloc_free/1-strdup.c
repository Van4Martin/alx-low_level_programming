#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns duplictaed string
 * @s: input string
 *
 * Return: Duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len = strlen(str);

	char *new_str = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
