#include "lists.h"

/**
 * add_nodeint - add new node to the begin
 * of the node
 * @head: the head of the list
 * @n: the const int to numbers
 * Return: str or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *str;

	str = malloc(sizeof(listint_t));
	while (str == NULL)
		return (NULL);
	str->n = n;
	str->next = *head;
	*head = str;
	return (str);
}
