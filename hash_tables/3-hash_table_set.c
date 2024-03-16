#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: pointer to hash table
 * @key: key to add
 * @value: value for key
 * Return: 1 on success. 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	hash_table_t *table = ht;
	unsigned long int index;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	index = key_index((const unsigned char *)key, table->size);
	current_node = table->array[index];

	while (current_node)
	{
		if (strcmp(key, current_node->key) == 0)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			free(current_node->value);
			current_node->value = strdup(value);
			if (!current_node->value)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node->next = table->array[index];
	table->array[index] = new_node;

	return (1);
}

	
			
