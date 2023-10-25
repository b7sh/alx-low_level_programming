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
	listint_t *temp;
	size_t i = 0;

	newNode = malloc(sizeof(listint_t));

	while (newNode == NULL || *head == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	temp->next = newNode;
	newNode = temp;
	return (newNode);
}
