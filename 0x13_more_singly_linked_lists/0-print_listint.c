#include "lists.h"

/**
 * print_listint - prints the elemnts of a liked list
 *@h: the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num;

	num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
