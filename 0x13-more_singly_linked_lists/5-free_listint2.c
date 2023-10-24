#include "lists.h"

/**
 * free_listint2 - free the temporary memory
 * @head: the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
