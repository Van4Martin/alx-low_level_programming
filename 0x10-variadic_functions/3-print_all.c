#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list arg;
	char *s, c;
	float f;
	int i, num_args = 0;

	va_start(arg, format);
	while ((c = *(format++)))
	{
		switch (c)
		{
			case 'c':
				num_args++;
				i = va_arg(arg, int);
				printf("%c", i);
				break;
			case 'i':
				num_args++;
				i = va_arg(arg, int);
				printf("%d", i);
				break;
			case 'f':
				num_args++;
				f = va_arg(arg, double);
				printf("%f", f);
				break;
			case 's':
				num_args++;
				s = va_arg(arg, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
					printf("%s", s);
				break;
				default;
				break;
		}
	}
	va_end(arg);
	printf("\n");
}
