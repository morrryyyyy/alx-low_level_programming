#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at the nth index of a linked list
 *@head: the head of the list
 *@index: the nth node of the list
 *
 * Return: a pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	count = 0;
	current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);
	else
		return (current);
}
