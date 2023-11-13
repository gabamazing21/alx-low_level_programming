#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	newNode = (dlistint_t *) malloc(sizeof(struct dlistint_s));
	newNode->n = n;
	(* head)->prev = newNode;
	newNode ->next = *head;
	*head = newNode;
	return (newNode);
}
