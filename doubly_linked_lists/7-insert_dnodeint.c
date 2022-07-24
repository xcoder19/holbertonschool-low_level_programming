#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h;
	dlistint_t *node;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return NULL;

	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*h == NULL)
	{
		*h = node;
		return node;
	}
	if (idx == 0)
	{
		node->next = (*h);
		(*h)->prev = node;
		(*h) = node;
		return node;
	}
	while (p->next != NULL)
	{
		if (idx == 0)
			break;

		p = p->next;
		idx--;
	}
	if (idx > 0)
	{
		return NULL;
	}
	node->next = p;
	node->prev = p->prev;
	p->prev->next = node;
	return node;
}
