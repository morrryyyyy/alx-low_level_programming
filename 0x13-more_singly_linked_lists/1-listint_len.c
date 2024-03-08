#include "lists.h"

/**
 * listint_len - prints the size of a linked list
 *@h: the linked list
 *
 * Return: the size of a list
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
