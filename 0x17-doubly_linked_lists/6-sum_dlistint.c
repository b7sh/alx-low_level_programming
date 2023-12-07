#include "lists.h"

/**
 * sum_dlistint - find the sum of nodes values in the list
 * @head: the head of the list
 * Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
