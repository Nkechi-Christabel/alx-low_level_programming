#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hashtable to search.
 * @key: The key to look for.
 *
 * Return: The value or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *current_item;

	if (!key || !ht || strcmp(key, "") == 0)
		return (0);

	 /* Calculate the index using the hash function (hash_djb2) */
	idx = hash_djb2((const unsigned char *)key) % ht->size;

	/* Traverse the linked list using the above index*/
	current_item = ht->array[idx];

	while (current_item)
	{
		/* Check if the key matches */
		if (strcmp(current_item->key, key) == 0)
			/* Return the associated value */
			return (current_item->value);

		current_item = current_item->next;
	}

	/* Key not found, Returns NULL */
	return (NULL);
}
