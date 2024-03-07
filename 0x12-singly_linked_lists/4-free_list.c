#include "lists.h"

/**
 * free_list - frees all the nodes in a linked list and the strings within them
 *@head: the head of the list
 *
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;

		free(temp->str);
		free(temp);
	}
}
