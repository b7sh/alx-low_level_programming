#include "lists.h"
/**
 * list_len - return the number of elements
 * @h: the head
 * Return: calculate
 */
size_t list_len(const list_t *h)
{
	size_t calculate = 0;

	while (h != NULL)
	{
		calculate++;
		h = h->next;
	}
	return (calculate);
}
