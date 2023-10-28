#include "main.h"

/**
 * _puts - print a string
 * @str: variable
 */

void _puts(char *str)
{
	int i = 0;

	while(str != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
