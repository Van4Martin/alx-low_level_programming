#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	int  f;
	a = sizeof(char);
	b = sizeof(int);
	c = sizeof(long int);
	d = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a char: %d bite(s)\n", a);
	printf("Size of an int: %d bite(s)\n", b);
	printf("Size of a long int: %d bite(s)\n", c);
	printf("Size of a long long int: %d bite(s)\n", d);
	printf("Size of a float: %d bite(s)\n", f);
	return 0;
}

