#include "hash_tables.h"

/**
 * _free - Free's new node and key.
 * @node: The node to be freed.
 * @key: The key to be freed.
 *
 * Return: 0 always Success.
 */

int _free(hash_node_t *node, const char *key)
{
	if (key)
		free(node->key);
	free(node);
	return (0);
}


/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hastable to add or update the key/value pair.
 * @key: The key to add.
 * @value: The value associated with the key (duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *new_node, *current_item;

	if (!key || !ht || strcmp(key, "") == 0)
		return (0);

	idx = hash_djb2((const unsigned char *)key) % ht->size;
	current_item = ht->array[idx];

	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = strdup(value);

			if (!current_item->value)
				return (0);

			return (1);
		}
		current_item = current_item->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
		_free(new_node, NULL);

	new_node->value = strdup(value);
	if (new_node->value == NULL)
		_free(new_node, key);

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
