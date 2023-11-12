#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	unsigned int i;

	if (nmemb == NULL || size == NULL)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		str[i] = 0;

	return (str);
}
