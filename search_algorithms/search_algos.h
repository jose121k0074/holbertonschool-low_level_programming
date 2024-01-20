#ifndef SEARCH_ALGORITHM
#define SEARCH_ALGORITHM

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *arr, int start, int end);
int recursive_search(int *arr, int l, int r, int val);

#endif
