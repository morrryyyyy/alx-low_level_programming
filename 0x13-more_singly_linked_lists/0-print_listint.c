#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 *@h: the linked list
 *
 * Return: the size of the list
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
