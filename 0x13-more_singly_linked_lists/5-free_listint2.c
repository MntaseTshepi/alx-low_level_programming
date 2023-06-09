#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Node pointer.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
