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
	unsigned long int s;
	hash_node_t *checker, *n;

	if (!ht || !ht->size || !strlen(key))
		return (0);
	position = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[s];
	while (checker)
	{
		if (!strcmp(checker->key, key))
		{
			free(checker->value);
			checker->value = strdup((char *)value);
			if (!checker->value)
				return (0);
			return (1);
		}
		checker = checker->next;
	}
	n = malloc(sizeof(hash_node_t));
	if (!n)
		return (0);
	n->key = strdup((char *)key);
	if (!n->key)
	{
		free(n);
		exit(0);
	}
	n->value = strdup((char *)value);
	if (!n->value)
	{
		free(n->value);
		free(n);
		return (0);
	}
	n->next = ht->array[s];
	ht->array[s] = n;
	return (1);
}
