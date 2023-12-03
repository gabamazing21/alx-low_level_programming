#include "hash_tables.h"
/**
 * hash_table_create - create table
 * @size: size of table
 * Return: hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->size = size;
	return (table);
}

