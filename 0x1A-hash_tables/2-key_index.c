#include "hash_tables.h"

/**
 * key_index - Get the index at which a key
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 * Return: The key index
 * Description: The program uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}