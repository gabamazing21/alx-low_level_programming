#include "hash_tables.h"
/**
 * hash_table_t - table item
 * @size: size of table
 * Return: hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table = (hash_table_t *) malloc(sizeof(hash_table_t));
	table->key = (char *) malloc(sizeof(char));
	table->value = (char *) malloc(sizeof(char));
	return table;
}

