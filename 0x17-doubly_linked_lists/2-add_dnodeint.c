#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: the head of the list
 * @n: the data in the node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (*head);
}
