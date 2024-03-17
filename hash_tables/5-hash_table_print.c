#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Pointer to the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;
	int first_entry = 1;

	if (!ht)
		return;

	printf("{");
	index = 0;

	while (index < ht->size)
	{
		current_node = ht->array[index];

		while (current_node)
		{
			if (first_entry)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				first_entry = 0;
			}
			else
			{
				printf(", '%s': '%s'", current_node->key, current_node->value);
			}
			current_node = current_node->next;
		}
		index++;
	}
	printf("}\n");
}
