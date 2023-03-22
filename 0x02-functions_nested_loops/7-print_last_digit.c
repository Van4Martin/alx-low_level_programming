#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Computes and print the last digit of int num
 * @num: Integer whose last digit is to be computed
 * Return: lastDigit (Success)
 */
int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;
	_putchar(lastDigit);
	return (lastDigit);
}

