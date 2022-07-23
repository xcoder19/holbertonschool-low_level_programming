#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		free(head->next);
		if (head->prev != NULL)
		{
			free(head->prev);
		}
		head = head->next;
		free(head);
	}
}