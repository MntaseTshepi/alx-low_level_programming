#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: Node pointer.
 * @index: Position of node.
 * Return: 1 if it succeeded or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		while (index != 0)
		{
			if (previous == NULL || previous->next == NULL)
			{
				return (-1);
			}
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		return (1);
	}
}

