#include "lists.h"

/**
 * free_listint - free the temporary memory
 * @head: the head of the list
*/

void free_listint(listint_t *head)
{
	listint_t *lcr;

	while (head != NULL)
	{
		lcr = head->next;
		free(head);
		head = lcr;
	}
}
