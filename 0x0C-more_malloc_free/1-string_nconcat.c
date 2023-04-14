#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concates a string and the first n bytes of another string
 * @s1: input string 1
 * @s2: input string 2
 * @n: amount of bytes of s2 to be concatenated to s1
 * Return: Concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len_s1, len_s2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
	if (n >= len_s2)
	{
		n = len_s2;
	}
	result = (char *)malloc((len_s1 + n +  len_s2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[len_s1 + j] = s2[j];
	}
	result[len_s1 + n] = '\0';
	return (result);
}
