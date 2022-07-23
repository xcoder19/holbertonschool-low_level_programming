#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of a list
 * @head: pointer to dlistint_t pointer
 * @n: int
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node != NULL)
	{

		node->n = n;
		node->prev = NULL;

		if (*head == NULL)
		{
			node->next = NULL;
			*head = node;
			return (*head);
		}

		(*head)->prev = node;
		node->next = (*head);

		*head = node;

		return (*head);
	}

	return (NULL);
}
