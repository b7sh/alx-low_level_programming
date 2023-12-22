#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the araay size
 * Return: NULL if it fail or table if ot success
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	size_t index;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!(table->array))
		return (NULL);
	for (index = 0; index < size; index++)
		table->array[index] = NULL;
	return (table);
}
