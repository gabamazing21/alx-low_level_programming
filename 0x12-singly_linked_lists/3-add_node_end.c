#include "lists.h"
/**
 * add_node_end - add new node to the linkedlist at the end
 * @head: head node
 * @str: string
 * Return: number of item
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = _strlen(str);
		newNode->next = NULL;
		if (*head == NULL)
			*head = newNode;
		else
		{
			list_t *lastNode = *head;
			/*looking for last node, it will be null */
			while (lastNode->next != NULL)
			{
				lastNode = lastNode->next;
			}
			/* adding new node at the end of the linkedlist */
			/*with the help of last node */
			lastNode->next = newNode;
		}
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
