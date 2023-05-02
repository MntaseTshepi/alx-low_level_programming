#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Node pointer.
 * Return: The number of elements.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int value;

	value = 0;

	while (h != NULL)
	{
		value++;
		h = h->next;
	}
	return (value);
}
