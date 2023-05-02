#include "lists.h"

/**
 * free_listint - Function frees a linked list
 * @head: Node pointer.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
