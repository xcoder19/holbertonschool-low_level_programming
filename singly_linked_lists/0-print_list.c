
#include "lists.h"
/**
 * print_list - print all elements
 * @h: pointer to list_t
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		len++;
	}

	return (len);
}
