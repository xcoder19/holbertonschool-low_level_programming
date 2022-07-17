#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;

	while (tmp->next != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
	free(*head);
}
