#include "lists.h"
/**
 * print_dlistint - print elemenets of a list
 * @h: pointer to a doubly linked list
 * Return: length
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return len;
}