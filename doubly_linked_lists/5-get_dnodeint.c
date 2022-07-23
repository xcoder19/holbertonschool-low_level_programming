#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int flag = 0;
	int idx = index;
	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (idx == -1)
		{
			flag = 1;
			break;
		}
		head = head->next;
		idx--;
	}
	if (flag)
		return (head);

	return (NULL);
}