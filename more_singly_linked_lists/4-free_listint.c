#include "lists.h"

void free_listint(listint_t *head)
{
	while (head != NULL)
	{

		free(head->next);
		free(head);
		head = head->next;
	}
}
