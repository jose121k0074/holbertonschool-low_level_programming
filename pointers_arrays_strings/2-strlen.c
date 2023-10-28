#include "main.h"

/*
 * _strlen - funcion strlen
 * @s: variable s
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
