#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all integers.
 * @head: Node pointer.
 * Return: Sum of all the integers or 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int count = 0;

	node = head;
	while (node != NULL)
	{
		count += node->n;
		node = node->next;
	}
	return (count);
}
