#include "main.h"

/**
 * _puts_recursion - function
 * @s: variable
 */

void _puts_recursion(char *s)
{
	char *s1 = s;

	if (*s1 != '\0')
	{
		_putchar(*s1);
		s1++;
		_puts_recursion(s1);
	}
	else
		_putchar('\n');
}
