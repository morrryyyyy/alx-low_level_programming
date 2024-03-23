#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at a particular index
 * @head: the head of the linked list
 *@index: the index of the node
 *
 * Return: the node at the index (success) or NULL(failure)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	count = 0;
	current = head;

	while (current->next != NULL && count < index)
	{
		count++;
		current = current->next;
	}
	if (count < index || current == NULL)
		return (NULL);
	return (current);
}
