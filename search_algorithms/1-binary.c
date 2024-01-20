#include "search_algos.h"

/**
  * print_array - prints an array
  * @arr: array to print
  * @start: start of array
  * @end: end of array
  */

void print_array(int *arr, int start, int end)
{
	int i = 0;

	printf("Searching in array: ");
	while (start <= end)
	{
		if (i > 0)
			printf(", ");
		i = start++;
		printf("%d", arr[i++]);
	}
	printf("\n");
}


/**
  * recursive_search - recursive search using binary
  * @arr: array to search
  * @l: left value
  * @r: right value
  * @val: value for search
  *
  * Return: index or -1 if not found
  */

int recursive_search(int *arr, int l, int r, int val)
{
	int mid;

	if (r >= l)
	{
		mid = l + (r - l) / 2;
		print_array(arr, l, r);
		if (arr[mid] == val)
			return (mid);
		if (arr[mid] > val)
			return (recursive_search(arr, l, mid - 1, val));
		return (recursive_search(arr, mid + 1, r, val));
	}
	return (-1);
}


/**
  * binary_search - Search for a value in an array of ints using binary search
  * @array: array to search
  * @size: of array
  * @value: Value to search for
  *
  * Return: first index where the value is located
  */

int binary_search(int *array, size_t size, int value)
{
	if (array && size)
		return (recursive_search(array, 0, (int)size - 1, value));
	return (-1);
}

