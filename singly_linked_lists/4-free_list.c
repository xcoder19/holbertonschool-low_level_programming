#include "lists.h"
/**
 * free_list - frees a singly linked list
 * @head: pointer to a node
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
