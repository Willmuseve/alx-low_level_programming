#include "hash_tables.h"
/**
 * hash_table_set - adds all 
 * @ht: hash table
 * @key: key to be added
 * @value: value associated with the key
 * Return: 1 or 0 if it succeeds or fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int x, y;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	x = key_index((const unsigned char *)key, ht->size);
	for (y = x; ht->array[y]; y++)
	{
		if (strcmp(ht->array[y]->key, key) == 0)
		{
			free(ht->array[y]->value);
			ht->array[y]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[x];
	ht->array[x] = new;

	return (1);
}
