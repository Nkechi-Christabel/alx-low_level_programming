#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node, *next_node;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			next_node = current_node->next;
			free(current_node->value);
			free(current_node->key);
			free(current_node);
			current_node = next_node;
		}
	}
	/* Free the array of pointers to hash nodes */
	free(ht->array);
	/* Free the hash table structure itself */
	free(ht);
}
