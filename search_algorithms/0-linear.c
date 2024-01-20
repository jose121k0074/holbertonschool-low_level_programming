#include "search_algos.h"

/**
  * linear_search - searches for a value in an array
  * of integers using the Linear search algorithm
  * @array: array to search
  * @size: of array
  * @value: Value to search
  *
  * Return: first index where the value is located
  */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
