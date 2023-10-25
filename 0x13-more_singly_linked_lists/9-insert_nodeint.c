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
	size_t i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || *head == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	while (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; temp != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
