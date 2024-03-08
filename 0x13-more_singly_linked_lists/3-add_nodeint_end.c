#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 *@head: a pointer to the head of the list
 *@n: the value stored in the new node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int new_num;
	listint_t *current;
	listint_t *new = malloc(sizeof(listint_t));

	new_num = n;

	if (new == NULL)
		return (NULL);

	new_num = n;

	new->n = new_num;

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
