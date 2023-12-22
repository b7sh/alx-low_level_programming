#include "hash_tables.h"

/**
 * hash_table_set -  a function that gives you the index of a key
 * @ht: the hash table pointer
 * @key: the key to add
 * @value: the key value
 * Return: the index at which the key/value pair
 *  should be stored in the array of the hash table
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *copy;
	size_t index1, index2;

	if (ht == NULL || key == NULL || *key == NULL || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index1 = key_index((const unsigned char *)key, ht->size);

	for (index2 = index1; ht->array[index2]; index2++)
	{
		if (strcmp(ht->array[index2]->key, key) == 0)
		{
			free(ht->array[index2]->value);
			ht->array[index2]->value = copy;
			free(copy);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = copy;
	new_node->next = ht->array[index1];
	ht->array[index1] = new_node;

	return (1);
}
