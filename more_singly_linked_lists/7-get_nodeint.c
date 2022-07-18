#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;
	while (head != NULL)
	{
		if (index == 0)
		{
			tmp = head;
			break;
		}
		head = head->next;
		index--;
	}
	return (tmp);
}