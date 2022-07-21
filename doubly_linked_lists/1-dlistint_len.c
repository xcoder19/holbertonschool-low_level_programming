
#include "lists.h"
/**
 * dlistint_len - return length of linked list
 * @h: pointer to doubly linked list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
