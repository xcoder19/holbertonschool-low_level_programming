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
	dlistint_t *node, *tmp, *p = *h;

	node = malloc(sizeof(dlistint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
		if (idx == 0)
		{
			node->next = (*h);
			(*h) = node;
			return (*h);
		}
		while (idx != 0)
		{
			if (p == NULL)
			{
				return (NULL);
			}
			if (idx == 1)
			{
				tmp = p->next;
				p->next = node;
				node->next = tmp;
				break;
			}
			p = p->next;
			idx--;
		}
		return (node);
	}

	return (NULL);
}