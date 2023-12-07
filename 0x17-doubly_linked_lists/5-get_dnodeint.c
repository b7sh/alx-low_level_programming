#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node at list
 * @head: the head of the list
 * @index: hold the specific index
 * Return: head or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
