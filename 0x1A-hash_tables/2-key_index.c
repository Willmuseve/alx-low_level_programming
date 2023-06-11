 #include "hash_tables.h"
/**
 * key_index - returns the index of the value of the hash table
 * @key: the test key 
 * @size: size of the hash table
 * Return: mode of the hash key to size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}
