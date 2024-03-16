#include "hash_tables.h"
/**
 * key_index - creates key to hash table
 * @key: key to get index
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;

	return (index);
}
