#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: the linked list
 *
 * Return: the size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int n;

	n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
