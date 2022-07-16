#include "lists.h"
void free_list(list_t *head)
{
	free(head->str);
	while (head != NULL)
	{
		free(head->next);
		head = head->next;
	}
	free(head);
}