#include "lists.h"

/**
 * sum_listint - find the sum of the list element
 * @head: the head of the list
 * Return: head or NULL if it fail
 */

int sum_listint(listint_t *head)
{
	int index = 0;

	while (head != NULL)
	{
		index += head->n;
		head = head->next;
	}
	return (index);
}
