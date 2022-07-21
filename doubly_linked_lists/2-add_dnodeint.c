#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node != NULL)
	{

		node->n = n;
		node->next = (*head);
		node->prev = NULL;
		(*head) = node;
		if (*head != NULL)
		{
			(*head)->prev = node;
		}

		return (*head);
	}

	return (NULL);
}