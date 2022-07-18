#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;

	while (*head != NULL)
	{
		free(*head);
		*head = tmp->next;
	}
	free(*head);
}
