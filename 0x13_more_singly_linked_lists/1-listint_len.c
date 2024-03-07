#include "lists.h"

/**
 * listint_len - prints the number of nodes in a linked list
 *@h: the linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int num;

	num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
