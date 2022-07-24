#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to dlistint_t pointer
 * @idx: index
 * @n: number
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h;
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*h == NULL || h == NULL)
		return (add_dnodeint(h, n));
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (p->next != NULL)
	{
		if (idx == 0)
		{
			node->prev = p->prev;
			p->prev->next = node;
			p->prev = node;
			node->next = p;
			return (node);
		}
		p = p->next;
		idx--;
	}
	if (idx > 0 && idx != 1)
		return (NULL);
	if (p->next == NULL && idx == 0)
	{
		node->next = p;
		node->prev = p->prev;
		p->prev->next = node;
		p->prev = node;
		return (node);
	}
	return (node);
}
