#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;
	dlistint_t *prev;
	next = malloc(sizeof(next));
	while (head != NULL)
	{
		next = head->next;
		prev = head->prev;
		free(next);
		if (prev != NULL)
		{
			free(prev);
		}
		free(head);
		head = head->next;
	}
}