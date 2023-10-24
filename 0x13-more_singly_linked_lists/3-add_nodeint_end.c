#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of the list
 * @head: the head of the list
 * @n: the const integer for the numbers
 * Reuen: ptr or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	while (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	while (*head == NULL)
	{
		*head = ptr;
		return (NULL);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);
}
