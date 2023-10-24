#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of the list
 * @head: the head of the list
 * @index: the index to count
 * Return: temp or NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t index1 = 0;
	listint_t *temp = head;

	while (temp != NULL && index1 < index)
	{
		temp = temp->next;
		index1++;
	}
	if (temp != NULL)
		return (temp);
	else
		return (NULL);
}
