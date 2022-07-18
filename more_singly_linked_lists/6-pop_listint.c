#include "lists.h"
/**
 * pop_listint - pop head
 * @head: pointer to pointer listint_t
 * Return: value of head
 */
int pop_listint(listint_t **head)
{
	int data = (*head)->n;

	if (*head == NULL)
	{
		return 0;
	}

	(*head) = (*head)->next;

	return data;
}