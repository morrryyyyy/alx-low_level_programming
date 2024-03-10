#include "lists.h"

/**
 * free_listint2 - frees a linked list and set the head to NULL
 *@head: the head of the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	listint_t *current;
	listint_t *temp;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
