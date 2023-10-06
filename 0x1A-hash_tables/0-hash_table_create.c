#include "hash_tables.h"

/**
 * hash_table_create - It creates a hash table
 * @size: Size of the array
 *
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table)
	{
		table->size = size;
		table->array = malloc(sizeof(hash_table_t *) * size);

		if (!table->array)
		{
			free(table);
			return (NULL);
		}

		for (i = 0; i < table->size; i++)
			table->array[i] = NULL;
	}

	return (table);
}
