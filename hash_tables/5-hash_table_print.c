#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 *
 * @ht: the hash table
 *
 * Return: Printed hash table or NULL, doesn't print anything
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int init = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				if (init != 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				init = 1;
				ht->array[i] = ht->array[i]->next;

			}
		}
	}
	printf("}\n");
}
