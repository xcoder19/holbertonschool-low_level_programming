#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
