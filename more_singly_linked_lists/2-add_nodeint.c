
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: pointer to head pointer
 * @n: number
 * Return: new head pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->next = *head;
		node->n = n;
		*head = node;
		return (*head);
	}
	return (NULL);
}
