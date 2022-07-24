#include "lists.h"
/**
 * dlistint_len - return length of linked list
 * @h: pointer to doubly linked list
 * Return: length
 */
int dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}

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
	int len = dlistint_len(*h);
	int tmp = 0;
	dlistint_t *node;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return NULL;

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (len == idx)
		return (add_dnodeint_end(h, n));

	while (p != NULL)
	{
		if (tmp == idx)
		{
			node->next = p;
			node->prev = p->prev;
			p->prev->next = node;
			p->prev = node;
			break;
		}

		p = p->next;
		tmp++;
	}
	return (node);
}
