#include "main.h"

int _sqrt(int n, int x);
/**
 * _sqrt - helps sqrt function find sqrt
 * @n: natral number
 * @x: sqrt of n
 * Return: natural sqrt of n
 */

int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (x);

	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - get the natural sqrt of n
 * @n: integer
 * Return: natural sqrt of n
 */

int _sqrt_recursion(int n)
{
	int raiz = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, raiz));
}
