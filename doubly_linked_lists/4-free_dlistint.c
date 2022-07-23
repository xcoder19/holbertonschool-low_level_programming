#include "lists.h"
void free_dlistint(dlistint_t *head)
{

	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}