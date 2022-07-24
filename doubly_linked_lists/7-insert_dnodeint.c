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

	while (idx != 0)
	{
		if (p == NULL)
		{
			return (NULL);
		}
		if (idx == 1)
		{
			node->prev = p;
			node->next = p->next;
			p->next = node;
			break;
		}
		p = p->next;
		idx--;
	}

	return node;
}
