#include "lists.h"

/**
 * pop_listint - deleted the first node of a linked list
 *@head: a pointer to the first node
 *
 *Return: the data of the first node (success) or 0(failure)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;

	free(temp);
	return (data);
}
