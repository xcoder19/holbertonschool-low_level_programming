#include "lists.h"
/**
 * list_len - list number of elements
 * @h: pointer to a linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}