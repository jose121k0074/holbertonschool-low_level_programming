#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: A pointer the head of the list_t.
 * @str: The string to be added to the list_t.
 *
 * Return: If the function fails - NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *i;
	int lengh;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	i = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lengh = 0; str[lengh];)
		lengh++;

	new->str = i;
	new->len = lengh;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
