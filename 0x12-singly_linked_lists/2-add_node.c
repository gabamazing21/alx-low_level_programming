#include "lists.h"
/**
 * add_node - add new node to the linkedlist at the begining
 * @head: head node
 * @str: string
 * Return: number of item
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = _strlen(str);
		newNode->next = *head;
		*head = newNode;
	}
	else
		return (NULL);
	return (newNode);
}
/**
 * _strlen - it return string lengh
 * @s: strings to get it's length
 * Return: it return lenght
 */
int _strlen(const char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;

	}
	return (length);
}
