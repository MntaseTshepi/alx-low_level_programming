#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Node pointer.
 * @idx: Position of node.
 * @n: Integer input.
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	idx--;

	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
