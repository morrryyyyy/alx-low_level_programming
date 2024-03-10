#include "lists.h"

/**
 * sum_listint - adds the values of all the nodes of a linked list
 *@head: the head of the list
 *
 *Return: the sum of all the values
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	sum = 0;
	current = head;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
