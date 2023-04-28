#include "lists.h"

/**
 * print_list - Prints all elements in list_t list
 * @h: Node pointer
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t value = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		value++;
	}

	return (value);
}
