#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Print a listint_t linked list
 * @head: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tortoise = head, *hare = head;
	/* Hash table to track visited nodes */
	
	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		/* Move the tortoise and hare pointers */
		tortoise = tortoise->next;
		hare = hare->next->next;
		/* Print the node value */
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		/* Check if the hare and tortoise meet */
		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			break;
		}
	}
	/* Check if a loop was found */
	if (tortoise == hare)
	{
		/* Reset tortoise and traverse again to print the loop */
		tortoise = head;
		while (tortoise != hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			tortoise = tortoise->next;
			hare = hare->next;
		}
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	return (count);
}
