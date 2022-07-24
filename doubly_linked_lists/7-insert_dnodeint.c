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
	dlistint_t *node, *tmp;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return NULL;

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*h == NULL)
		return NULL;

	if (idx == 0)
	{
		node->next = *h;
		(*h)->prev = node;
		(*h) = node;
		return node;
	}
	while (p->next != NULL)
	{
		if (idx == 0)
		{
			tmp = p->prev;
			p->prev->next = node;
			p->prev = node;
			node->next = p;
			node->prev = tmp;
			return node;
		}
		p = p->next;
		idx--;
	}
	if (p->next == NULL)
	{
		node->next = p;
		node->prev = p->prev;
		p->prev->next = node;
		p->prev = node;
		return node;
	}
	if (idx > 0)
		return NULL;

	return node;
}
