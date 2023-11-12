#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max: max value
 * Return: the pointer
 */

int *array_range(int min, int max)
{
	int *str, i;

	if (min > max)
		return (NULL);

	str = malloc(((max - min) + 1) * sizeof(int));

	if (str == NULL)
		return (NULL);

	for (i = 0; (min + i) <= max; i++)
		str[i] = (min + i);

	return (str);
}
