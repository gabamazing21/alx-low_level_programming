#include "lists.h"
/**
  * sum_listint - it sum data(n) in a listint_t linked list
  * @head: head node
  * Return: it sum of the integer
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
