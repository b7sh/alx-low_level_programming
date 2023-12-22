#include "hash_tables.h"

/**
 * hash_table_get -  a function that retrieves a value associated with a key
 * @ht: the hash table pointer
 * @key: to get the value
 * Return: NULL on fail or n->value on success
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	size_t index;

	if (!ht || !key || !(*key))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	n = ht->array[index];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;
	if (n == NULL)
		return (NULL);
	else
		return (n->value);
}
