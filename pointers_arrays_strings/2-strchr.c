#include "main.h"

/**
 * _strchr - function strchr
 * @s: puntero
 * @c: char for search
 * Return: busqueda
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
	    if (c == s[i])
		{
			s += i;
			return (s);
		}
		i++;
	}
	return ('\0');
}
