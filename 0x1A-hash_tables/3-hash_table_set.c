/**
 * hash_table_set - insert item into hash table
 * @ht: table
 * @key: key
 * @value: value
 * Return: 1 if success 0 for failure
 */
#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current_item = ht->array[index];
	if (current_item == NULL)
	{
		hash_node_t* head = (hash_node_t *) malloc(sizeof(hash_node_t));
		if (head == NULL)
		{
			return (0);
		}
		head->key = strdup(key);
		if (head->key == NULL)
		{
			free(head->key);
			free(head);
			return (0);
		}
		head->value = strdup(value);
		if (head->value == NULL)
		{
			free(head->key);
			free(head->value);
			free(head);
			return (0);
		}
		head->next = NULL;

		if (ht->size == index)
		{
			printf("table is full");
			free_table(ht);
			return (0);
		}
		ht->array[index] = head;
		return (1);
	}
	else
	{
		if (strcmp(current_item->key, key))
		{
			strcpy(current_item->value, value);
			return (1);
		}
		else
		{
		hash_node_t* head = (hash_node_t *) malloc(sizeof(hash_node_t));
		if (head == NULL)
		{
			return (0);
		}
		head->key = strdup(key);
		if (head->key == NULL)
		{
			free(head->key);
			free(head);
			return (0);
		}
		head->value = strdup(value);
		if (head->value == NULL)
		{
			free(head->key);
			free(head->value);
			free(head);
			return (0);
		}
		head->next = current_item;
		ht->array[index]->next = head;
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
