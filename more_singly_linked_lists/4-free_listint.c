#include "lists.h"

void free_listint(listint_t *head)
{
	while (head != NULL)
	{

		free(head);
		free(head->next);
		head = head->next;
	}
}
