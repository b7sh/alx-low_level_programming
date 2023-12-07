#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: the head of the list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
