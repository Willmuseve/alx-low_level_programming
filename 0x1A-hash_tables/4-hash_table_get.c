#include "hash_tables.h"
/**
 * hash_table_get - gets the value associated with key
 * @ht: the table to be used
 * @key: key
 * Return: string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;
	hash_node_t *c;

	if (!ht || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	x = key_index((const unsigned char *)key, ht->size);
	c = ht->array[x];
	while (c)
	{
		if (!strcmp(c->key, key))
			return (c->value);
		c = c->next;
	}
	return (NULL);
}
