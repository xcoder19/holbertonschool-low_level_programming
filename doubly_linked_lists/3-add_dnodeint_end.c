#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a list
 * @head: pointer to dlistint_t pointer
 * @n: data
 * Return: added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *p = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (p->next != NULL)
	{
		p = p->next;
	}
	node->prev = p;
	p->next = node;

	return (node);
}
