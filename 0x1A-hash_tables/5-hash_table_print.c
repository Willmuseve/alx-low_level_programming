#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Prrint a hash table.
 * @ht: A pointer to the hash table to be printed.
 * Description: Key/value pairs are printed in the order
 * they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int j;
	unsigned char k = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (k == 1)
				printf(", ");

			node = ht->array[j];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			k = 1;
		}
	}
	printf("}\n");
}
