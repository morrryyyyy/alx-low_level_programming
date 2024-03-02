#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: a pointer to the head
 *@str: the string to be stored in the new node
 *
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new_str = strdup(str);
	if (str == NULL)
	{
		free(new);
	}
	new->str = new_str;
	new->len = strlen(new_str);
	new->next = *head;
	*head = new;
	return (new);
}
