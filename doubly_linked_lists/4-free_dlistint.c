#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->next);
		if (head->prev != NULL)
		{
			free(head->prev);
		}

		free(head);
		head = head->next;
	}
}