#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: ARgument vector
 *
 * Return: Nothing
 */
void main(int argc, char *argv[])
{
	int count;
	
	count = 0;
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
}
