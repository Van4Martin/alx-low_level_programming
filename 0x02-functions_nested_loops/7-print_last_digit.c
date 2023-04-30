#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Computes and print the last digit of int num
 * @num: Integer whose last digit is to be computed
 * Return: lastDigit (Success)
 */
int print_last_digit(int num)
{
	int i =  num % 10;
	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');

	return (i);
}
