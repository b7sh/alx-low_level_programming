#include "lists.h"

/**
 * reverse_listint - reverse the elements of the list
 * @head: the head of the list
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = new;
	}
	*head = prev;
	return (*head);
}
