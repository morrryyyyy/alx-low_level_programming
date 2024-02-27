#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 *@h: the list
 *
 *Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	unsigned int n;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
