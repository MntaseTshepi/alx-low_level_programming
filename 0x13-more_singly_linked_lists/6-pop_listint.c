#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Node pointer.
 * Return: 0 if linked list empty or the head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *del_node;
	int value;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	value = (*head)->n;
	del_node = *head;
	(*head) = (*head)->next;
	free(del_node);
	return (value);
}
