#include "lists.h"

/**
 * print_list - print the total nodes
 * @h: the head
 * Return: result
 */

size_t print_list(const list_t *h)
{
	size_t result = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		result++;
	}
	return (result);
}
