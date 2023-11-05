#include "main.h"

/**
 * _pow_recursion - function main
 * @x: variable1
 * @y: variable2
 * Return: power number
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, --y));
}
