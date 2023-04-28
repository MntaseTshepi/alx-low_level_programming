#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list.
 * @head : Pointer node
 * @str: String input
 * Return: Address of new element or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	if (*head != NULL)
		new_node->next = *head;
	if (*head == NULL)
		new_node->next = NULL;
	*head = new_node;
	return (*head);
}

