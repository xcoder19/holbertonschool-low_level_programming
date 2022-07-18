#include "lists.h"
int sum_listint(listint_t *head)
{
	int i = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}