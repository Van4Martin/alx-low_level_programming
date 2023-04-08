#include "main.h"

/**
 * _strcat - concatenate two stringd
 * @dest: Destination
 * @src: source
 *
 * Return: The pointr to dest
 */
char *_strcat(char *dest, char *src)
{
	int i,  j;
	
	i = 0;
	while(*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while(j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
