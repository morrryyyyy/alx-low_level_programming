#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a linked list
 *@head: the head of the list
 *@str: the stirng to be copied into the new node
 *
 * Return: the address of the new element(success) or NULL(if failed)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *current;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = new_str;
	new->len = strlen(new_str);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
