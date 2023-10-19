#include "lists.h"

/**
 * add_node - add a new node to the begining
 * @head: head pointer to pointer
 * @str: a const character pointer
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	size_t index = 0;

	while (str[index] != '\0')
		index++;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = index;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
