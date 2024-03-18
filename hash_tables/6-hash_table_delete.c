#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *current_node, *tmp_node;
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < table->size; index++)
	{
		current_node = table->array[index];
		while (current_node != NULL)
		{
			tmp_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = tmp_node;
		}
	}

	free(table->array);
	free(table);
}
