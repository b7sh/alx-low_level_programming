#include "hash_tables.h"

/**
 * key_index -  a hash function that implementing the djb2 algorithm
 * @key: get the key
 * @size: size of the array
 * Return: hash_djb2(key) % size
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
