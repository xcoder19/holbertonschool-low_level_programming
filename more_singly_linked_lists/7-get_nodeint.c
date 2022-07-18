#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node of a list
 * @index: index of nth node
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		if (index == 0)
		{
			tmp = head;
			break;
		}
		head = head->next;
		index--;
	}
	return (tmp);
}
