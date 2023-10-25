#include "lists.h"

/**
 * insert_nodeint_at_index - inserting new node at index
 * @head: the head of the list
 * @idx: the index we want to insert at
 * @n: the value of the integer
 * Return: newNode or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp = *head;
	size_t i = 0;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || *head == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (temp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
		i++;
	}
	return (NULL);
}
