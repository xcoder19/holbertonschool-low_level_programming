#include "lists.h"

void free_listint(listint_t *head)
{
	while (head != NULL)
	{

		head = head->next;
		free(head);
	}
	free(head);
}
