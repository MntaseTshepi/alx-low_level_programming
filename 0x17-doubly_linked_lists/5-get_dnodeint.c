#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a linked list.
 * @head: Node pointer.
 * @index: Index of node.
 * Return: nth node or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	size_t val = 0;

	if (head == NULL)
		return (NULL);

	node = head;
	while (node != NULL && val < index)
	{
		node = node->next;
		val++;
	}
	return (node);
}
