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
	node->prev = NULL;
	node->next = NULL;
	if (*h == NULL)
	{
		*h = node;
		return (node);
	}
	if (idx == 0)
	{
		(*h)->prev = node;
		node->next = (*h);
		(*h) = node;
		return (node);
	}
	while (idx != 0)
	{
		if (p == NULL)
			return (NULL);

		if (idx == 1)
		{
			node->next = p->next;
			node->prev = p;
			p->next->prev = node;
			p->next = node;
			break;
		}
		p = p->next;
		idx--;
	}
	return (node);
}
