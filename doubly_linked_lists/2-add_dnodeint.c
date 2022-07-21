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
		node->next = (*head);
		node->prev = NULL;
		*head = node;

		return (*head);
	}

	return (NULL);
}
