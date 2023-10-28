#include "main.h"
/**
 * swap_int - swap variables
 * @a: variable pointer a
 * @b: variable pointer b
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
