#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table pointer
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	size_t index;
	int pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			n = ht->array[index];
			while (n != NULL)
			{
				if (pair == '\0')
					printf(", ");
				printf("'%s': '%s'", n->key, n->value);

				n = n->next;
				pair = 0;
			}
		}
	}
	printf("}\n");
}
