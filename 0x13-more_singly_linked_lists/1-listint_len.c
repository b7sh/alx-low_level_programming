#include "lists.h"

/**
 * listint_len - print the number of element
 * @h: the head list
 * Return: result
 */

size_t listint_len(const listint_t *h)
{
	size_t result = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		result++;
		h = h->next;
	}
	return (result);
}
