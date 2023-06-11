#include "hash_tables.h"

/**
 *hash_table_create- A function that creates a hash table
 *@size: Arguments of the table
 *Return: A pointer or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newT;
	unsigned int j;

	if (size > 0)
	{
		newT = malloc(sizeof(hash_table_t));
		if (!newT)
			return (NULL);
		newT->size = size;
		newT->array = malloc(sizeof(hash_node_t *) * size);
		if (!newT->array)
		{
			free(newT);
			return (NULL);
		}
		for (j = 0; j < size; j++)
			newT->array[j] = NULL;
		return (newT);
	}
	return (NULL);
}
