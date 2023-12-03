#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: A pointer to the head of the list_t.
 * @str: The string to be added to the list_t.
 *
 * Return: If the function fails - NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *i;
	int lenght;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	i = strdup(str);
	if (i == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lenght = 0; str[lenght];)
		lenght++;

	new->str = i;
	new->len = lenght;
	new->next = *head;

	*head = new;

	return (new);
}
