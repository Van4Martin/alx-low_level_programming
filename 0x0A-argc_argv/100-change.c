#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: argument count
 * @argv: Argument vector
 *
 * Return: 0 Sucess
 */
int main(int argc, char *argv[])
{
	int cents, num1, num2, num3, num4, num5;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num1 = cents / 25;
	cents %= 25;
	num2 = cents / 10;
	cents %= 10;
	num3 = cents / 5;
	cents %= 5;
	num4 = cents / 2;
	cents %= 2;
	num5 = cents;

	printf("%d\n", num1 + num2 + num3 + num4 + num5);
	return (0);
}
