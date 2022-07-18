#include "lists.h"
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(*head);
	}
	free(*head);
}
