#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: Node pointer.
 * @index: Index of node.
 * Return: nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int value = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	while (tmp != NULL && value < index)
	{
		tmp = tmp->next;
		value++;
	}
	return (tmp);
}
