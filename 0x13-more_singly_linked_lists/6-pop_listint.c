#include "lists.h"

/**
 * pop_listint - delete the head of the list
 * @head: the head of the list
 * Return: a or 0 (success)
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int a;

	while (head != NULL || *head != NULL)
		return (0);
	a = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (a);
}
