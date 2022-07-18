#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to listint_t pointer
 * @idx:index
 * @n: data
 * Return:pointer to created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp, *p = *head;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
		if (idx == 0)
		{
			node->next = (*head);
			(*head) = node;
			return (*head);
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
