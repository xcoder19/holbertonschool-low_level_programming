#include "lists.h"
/**
 * add_nodeint_end - add node at the end of a list
 * @head: pointer to a listint_t pointer
 * @n: integer
 * Return: pointer to head of a list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tail;
	tail = *head;
	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{

		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = node;
	}
	return (*head);
}