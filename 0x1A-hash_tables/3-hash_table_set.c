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
	hash_node_t *new_node, *temp;
	char *copy;
	size_t index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (temp = ht->array[index]; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = copy;
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
	new_node->value = copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
