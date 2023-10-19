#include "lists.h"

/**
 * free_list - frees the list_t
 * @head: the pointer to free
 */

void free_list(list_t *head)
{
	list_t *f;

	while (head != NULL)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
