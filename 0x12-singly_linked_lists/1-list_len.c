#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: The node pointer
 * Return: The number of elements.
 */

size_t list_len(const list_t *h)
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
