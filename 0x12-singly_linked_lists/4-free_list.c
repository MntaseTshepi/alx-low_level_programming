#include "lists.h"

/**
 * free_list - Function frees a list_t list
 * @head: Pointer to the list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}
	tmp = head;
	while (tmp != NULL)
	{
		free(tmp->str);
		free(tmp);
		tmp = tmp->next;
	}
}
