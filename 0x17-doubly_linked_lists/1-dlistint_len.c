#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a doubly linked list
 * @h: the doubly linked list
 *
 * Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int n;

	n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
