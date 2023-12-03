/**
 * key_index - get the index for a key
 * @size: size of hash_table
 * @key: key for hash_table
 * Return: index
 */
#include "hash_tables.h"
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
