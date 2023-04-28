#include "lists.h"

/**
 * add_node_end - Adds nodes at the end of a linked list.
 * @head: Pointer node
 * @str: String input
 * Return: Address of new element or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (new_node);
}
