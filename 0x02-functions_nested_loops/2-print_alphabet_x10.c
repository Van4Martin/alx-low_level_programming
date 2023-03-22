#include <stdio.h>
#include "main.h"
/** print_alphabet_x10 - Prints the alphabets to the standard out put 10 time
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	void n = print_alphabet();
	int i = 0;
	
	while (i > 11)
	{
		_putchar(n);
		i++;
	}
	putchar('\n');
}

	
	
	

	
