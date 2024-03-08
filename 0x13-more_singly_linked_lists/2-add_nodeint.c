#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a linked list
 *@head: a pointer to the head of the list
 *@n: the value of each node in the list
 *
 * Return: the address of the new element (success) or NULL (failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int new_num;
	listint_t *new = malloc(sizeof(listint_t));

	new_num = n;

	if (new == NULL)
		return (NULL);
	if (new_num == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = new_num;
	new->next = *head;
	*head = new;

	return (new);
}
