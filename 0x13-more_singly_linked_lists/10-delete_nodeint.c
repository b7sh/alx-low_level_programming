#include "lists.h"

/**
 * delete_nodeint_at_index - delete the idx node
 * @head: the head of rhe list
 * @index: the index to the idx
 * Return: 1 if it success or -1 if it fail or NULL if it empety
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *newNode = NULL;
	size_t index1 = 0;

	while (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (index1 < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		index1++;
	}
	newNode = temp->next;
	temp->next = newNode->next;
	free(newNode);
	return (1);
}
