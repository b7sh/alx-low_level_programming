#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: the head of the list
 * @idx: hold the index
 * @n: hold the integer value
 * Return: new_node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *head = *h;
	unsigned int i;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node)
		{
			new_node->n = n;
			for (i = 0; i < idx - 1 && head != NULL; i++)
				head = head->next;
			if (i == idx - 1)
			{
				new_node->next = head->next;
				new_node->prev = head;
				if (head->next)
					head->next->prev = new_node;
				head->next = new_node;
			}
			else
			{
				free(new_node);
				return (NULL);
			}
		}
	}
	return (new_node);
}
