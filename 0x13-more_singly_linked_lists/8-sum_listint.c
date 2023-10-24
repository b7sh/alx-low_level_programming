#include "lists.h"

/**
 * sum_listint - find the sum of the list element
 * @head: the head of the list
 * Return: head or NULL if it fail
 */

int sum_listint(listint_t *head)
{
	int index = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		index += temp->n;
		temp = temp->next;
		index++;
	}
	return (index);
}
