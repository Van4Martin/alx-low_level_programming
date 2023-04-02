#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: Destination
 * @src: Source
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count_2 = 0;
	
	while (*(dest + count) != '\0')
	{
		count ++;
	}
	while (count_2 >= 0)
	{
		*(dest + count) = *(src + count_2);
		if (*(src + count_2) == '\0')
			break;
		count++;
		count_2++;
	}
	return (dest);
}
