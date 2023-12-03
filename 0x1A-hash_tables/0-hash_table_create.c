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

<<<<<<< HEAD
	if (!table)
=======
	if (table == NULL)
>>>>>>> 84730f60a9a0d06a198c6b76272ebe58bda1c8d1
		return (NULL);
	table->array = calloc(size, sizeof(hash_node_t *));
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

