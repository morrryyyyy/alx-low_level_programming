#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a linked list
 *@head: a pointer to the end of the list
 *@n: the value stored in the node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
