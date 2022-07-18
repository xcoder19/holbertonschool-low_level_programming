#include "lists.h"
/**
 * pop_listint - pop head
 * @head: pointer to pointer listint_t
 * Return: value of head
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;
	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	tmp = (*head)->next;
	(*head)->next = NULL;
	(*head) = tmp;
	return (data);
}
