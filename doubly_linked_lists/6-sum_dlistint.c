#include "lists.h"
/**
 * sum_dlistint - returns the sum of the data of a list
 * @head: pointer to dlistint_t
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	sum = sum + (head->n);

	return (sum);
}
