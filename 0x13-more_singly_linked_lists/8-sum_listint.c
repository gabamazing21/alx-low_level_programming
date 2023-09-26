#include "lists.h"
/**
 * sum_listint - add all n
 * @head: head node;
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	else
		return (0);
}
