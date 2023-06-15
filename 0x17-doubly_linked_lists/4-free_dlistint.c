#include "lists.h"

/**
 * free_dlistint - Function frees a linked list.
 * @head: Node pointer.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
