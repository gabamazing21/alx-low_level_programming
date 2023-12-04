/**
 * hash_table_set - insert item into hash table
 * @ht: table
 * @key: key
 * @value: value
 * Return: 1 if success 0 for failure
 */i
#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current_item = ht->array[index];

	if (current_item == NULL)
	{
		if (ht->size == index)
		{
			printf("table is full");
			free_table(ht);
			return (0);
		}
		strcpy(current_item->value, value);
		current_item->next = NULL;
		return (1);
	}
	else
	{
		if (strcmp(current_item->key, key))
		{
			strcpy(current_item->value, value);
			current_item->next = NULL;
			return (1);
		}
		else
		{
			hash_node_t *head = malloc(sizeof(hash_node_t));

			if (head == NULL)
			{
				free(head);
				return (0);
			}
			strcpy(head->key, key);
			strcpy(head->value, value);
			head->next = NULL;
			current_item->next = head;
			free(head);
			return (1);
		}
	}
}
void free_item(hash_node_t *item)
{
	free(item->value);
	free(item->key);
	free(item);
}
void free_table(hash_table_t *table)
{
	unsigned long int i;
	for (i = 0; i < table->size; i++)
	{
		hash_node_t *item = table->array[i];
		if (item != NULL)
		{
			free_item(item);
		}
	}
	free(table);
}
