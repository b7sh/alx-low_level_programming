#include "lists.h"

/**
 * add_node_end - add node to the end of the list
 * @head: the pointer to pointer head
 * @str: const charactar pointer
 * Return: NULL or new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *replace = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (replace->next != NULL)
	{
		replace = replace->next;
	}
	replace->next = new_node;
	return (new_node);
}
