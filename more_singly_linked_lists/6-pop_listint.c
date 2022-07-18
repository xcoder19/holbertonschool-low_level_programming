#include "lists.h"
/**
 * pop_listint - pop head
 * @head: pointer to pointer listint_t
 * Return: value of head
 */
int pop_listint(listint_t **head)
{
	if (head == NULL)
	{
		return (0);
	}
	int data = (*head)->n;

	(*head) = (*head)->next;

	return (data);
}
