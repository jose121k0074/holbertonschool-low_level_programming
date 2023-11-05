#include "main.h"

/**
 * _divisible
 * @n: number
 * @x: checks if n is divisible
 * Return: 0 not prime, 1 if prime
 */

int _divisible(int n, int x)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (_divisible(n, ++x));
	return (0);
}

/**
 * is_prime_number - checks if is prime
 * @n: variable number
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (_divisible(n, 2));
}
