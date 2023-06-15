#include "lists.h"

/**
 * dlistint_len - Adds the number of elements in a linked list
 * @h: The node pointer
 * Return: The number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t val = 0;

	while (h != NULL)
	{
		val++;
		h = h->next;
	}
	return (val);
}
