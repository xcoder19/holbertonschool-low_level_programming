#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
