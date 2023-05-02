#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list.
 * @h: Node pointer.
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t value = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		value++;
		h = h->next;
	}
	return (value);
}
