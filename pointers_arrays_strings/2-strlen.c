#include "main.h"

/**
 * _strlen - funcion strlen
 * @s: variable 
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
