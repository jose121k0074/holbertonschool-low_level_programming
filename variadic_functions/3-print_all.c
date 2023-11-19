#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, m = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (m)
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("%p", str);
			break;
		default:
			m = 0;
			i++;
			continue;
		}
		m = 1;
		i++;
	}
	printf("\n");
	va_end(args);
}
