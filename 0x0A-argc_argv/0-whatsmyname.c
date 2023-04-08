#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count passed to main
 * @argv: argument vector(strings passed to main from the command line)
 * Return: Always 0 (Sucess)
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < 1; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
