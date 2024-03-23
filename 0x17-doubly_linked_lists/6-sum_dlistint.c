#include "lists.h"

/**
 * sum_dlistint - gets the sum of all the dsta of a inked list
 * @head: the head of the linked list
 *
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
