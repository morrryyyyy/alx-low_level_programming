#include "lists.h"

/**
 * free_listint - frees a linked list
 *@head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
