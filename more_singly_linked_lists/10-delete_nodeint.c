
#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *p = *head;
	if (*head == NULL)
	{
		return -1;
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	while (index != 0)
	{
		if (p = NULL)
		{
			return (-1);
		}

		if (index == 1)
		{
			tmp = p->next;
			p->next = p->next->next;
			free(tmp);
			break;
		}
		p = p->next;
		index--;
	}

	return (1);
}