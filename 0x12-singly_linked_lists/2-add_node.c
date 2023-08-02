#include "lists.h"
int len(const char *str);
/**
  * add_node - add node at the begining
  * @head: point to pointer head node
  * @str: string to add to node
  * Return: return pointer to head node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lk = malloc(sizeof(list_t));

	if (lk == NULL)
		return (0);
	lk->str = strdup(str);
	if (lk->str == NULL)
	{
		free(lk);
		return (NULL);
	}

	lk->len = len(str);
	lk->next = *head;
	*head = lk;
	return (*head);
}

/**
  * len - get the length of string
  * @str: char to get it's length
  * Return: return the length of the string
  */
int len(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
