#include "lists.h"

/**
 * print_dlistint - print the element in the dlistint_t
 * @h: the head of the list
 * Return: count
*/

size_t print_dlistint(const dlistint_t *h)
{
	int result = 0;

	if (!h)
	{
		return (result);
	}
	while (h->prev)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		result++;
	}
	return (result);
}
