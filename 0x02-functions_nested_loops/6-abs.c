#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolut value of any intiger
 *@num: Number whose absolute is to be computed
 * Return: int (Success)
 */
int _abs(int num)
{

	if (num < 0)
	{
		num = num * -1;
	}
	else if (num > 0)
	{
		num = num;
	}
	else
	{
		num = 0;
	}
	return (num);
}
