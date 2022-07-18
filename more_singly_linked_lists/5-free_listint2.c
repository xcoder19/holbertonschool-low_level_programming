#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *tmp2 = tmp->next;
	while (tmp2 != NULL)
	{
		free(tmp2);
		tmp2 = tmp2->next;
	}

	free(tmp);
}
