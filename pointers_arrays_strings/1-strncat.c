#include "main.h"

/**
 * _strncat - funcion concatenar
 * @dest: destino
 * @src: origen
 * @n: hasta donde
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 1;

	for (; *temp != '\0'; temp++)
	{
		;
	}
	for (; *src != '\0'; src++)
	{
		if (i == n){
			break;
		}
		*temp = *src;
		temp++;
		i++;
	}
	return (dest);
}
