#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hastable to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (printed)
				printf(", ");

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			printed = 1;
		}
	}

	printf("}\n");
}
