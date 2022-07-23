#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to dlistint_t
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (index == 0)
			break;

		head = head->next;
		index--;
	}
	if (index)
		return (NULL);

	return (head);
}
