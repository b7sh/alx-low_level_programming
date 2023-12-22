#include "hash_tables.h"

/**
 * hash_table_delete -  a function that deletes a hash table
 * @ht: the hash table pointer
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *n;
	size_t index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			n = ht->array[index];
			while (n != NULL)
			{
				tmp = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
