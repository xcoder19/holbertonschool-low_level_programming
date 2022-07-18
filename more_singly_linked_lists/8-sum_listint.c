#include "lists.h"
/**
 * sum_listint - sum of all the data of a linked list
 * @head: pointer to head of a list
 * Return: sum
 */
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
