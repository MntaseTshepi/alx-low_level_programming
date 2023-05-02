#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data.
 * @head: Node pointer
 * Return: 0 if list is empty or sum of all the data.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
