#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, limit1, limit2;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* iterate for the lenth of s1 */
	for (i = 0; s1[i] != '\0'; i++)
	/* repeat the same for s2 */
	for (j = 0; s2[j] != '\0'; j++)
	new_str = (char *)malloc((i + j + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (limit1 = 0; limit1 < i; limit1++)
	{
		new_str[limit1] = s1[limit1];
	}
	for (limit2 = 0; limit2 < j; limit2++)
	{
		new_str[limit1++] = s2[limit2];
	}
	new_str[limit1] = '\0';
	return (new_str);
}
