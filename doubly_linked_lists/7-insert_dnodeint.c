#include "lists.h"
/**
 * len_list - return length of linked list
 * @h: pointer to doubly linked list
 * Return: length
 */
unsigned int len_list(const dlistint_t *h)
{
	unsigned int len = 0;

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
	unsigned int len = len_list(*h);
	unsigned int count = 0;
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (len == idx)
		return (add_dnodeint_end(h, n));

	if (idx > len)
		return (NULL);

	while (p != NULL)
	{
		if (count == idx)
		{
			node->next = p;
			node->prev = p->prev;
			p->prev->next = node;
			p->prev = node;
			break;
		}

		p = p->next;
		count++;
	}
	return (node);
}
