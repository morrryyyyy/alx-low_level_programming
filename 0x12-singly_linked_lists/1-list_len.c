#include "lists.h"

/**
 * list_len - returns the length of a list
 *@h: the list
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
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
