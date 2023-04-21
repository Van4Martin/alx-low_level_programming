#include <stdio.h>
/**
*main - prints the opcodes
*@argc: number of arguments given to the program
*@argv: array of pointers to the argument
*Return: 0 always
*/
int main(int argc, char *argv[])
{
	int size, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;
	
	if ( != 2)
	{
	printf("Error\n");
	exit(1);
	}	
	size = atoi(argv[1]);
	if (size < 0)
	{	
	printf("Error\n");
	exit[2];
	}	
	for (index = 0; index < size; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcodes);
	
		if (index == size -1)
		{	
			continue;
			printf(" ");
			address++;
		}	
	}
	print("\n");
	return (0);
}

