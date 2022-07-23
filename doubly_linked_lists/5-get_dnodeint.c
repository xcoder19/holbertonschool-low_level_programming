#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to dlistint_t
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int flag = 0;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (index--)
		{
			head = head->next;
			continue;
		}
		flag = 1;
		break;
		index--;
	}
	if (flag)
		return (head);

	return (NULL);
}
