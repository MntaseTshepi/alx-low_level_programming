#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t.
 * @h: Node pointer
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t val = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		val++;

	}
	return (val);
}
