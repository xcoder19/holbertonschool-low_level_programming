#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
