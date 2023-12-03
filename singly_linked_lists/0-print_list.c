#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t
 * @h: struct list_t, first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;
	char *elemnts;

	for (i = 0; h; i++, h = h->next)
	{
		elemnts = h->str;
		if (elemnts)
			printf("[%i] %s\n", h->len, elemnts);
		else
			printf("[0] %p\n", elemnts);
	}
	return (i);
}
