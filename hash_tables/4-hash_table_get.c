#include "hash_tables.h"
/**
 * hash_table_get - gets value from node with key
 * @key: key to get value of
 * @ht: pointer to hash table
 * Return: value of node, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (!ht || !key)
		return (NULL);

	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node)
		{
			if (strcmp(key, current_node->key) == 0)
				return (current_node->value);
			current_node = current_node->next;
		}
	}

	return (NULL);
}
