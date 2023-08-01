#include "lists.h"
int len(const char *str);
/**
  * add_node_end - add node at the end of linked list
  * @head: pointer to pointer head node
  * @str: string to add
  * Return: return address of new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lk = malloc(sizeof(list_t)), *temp;

	if (lk == NULL)
		return (0);
	lk->str = strdup(str);
	if (lk->str == NULL)
	{
		free(lk);
		return (0);
	}
	lk->len = len(str);
	lk->next = NULL;
	if (*head == NULL)
	{
		*head = lk;
		return (lk);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = lk;
	return (lk);
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
