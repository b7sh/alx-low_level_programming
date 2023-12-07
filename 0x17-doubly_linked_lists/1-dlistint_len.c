#include "lists.h"

/**
 * dlistint_len - find the lengt of the list
 * @h: the head of the list
 * Return: result
*/

size_t dlistint_len(const dlistint_t *h)
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
		h = h->next;
		result++;
	}
	return (result);
}
