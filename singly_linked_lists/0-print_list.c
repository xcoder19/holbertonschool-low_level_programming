#include "lists.h"
size_t print_list(const list_t *h)
{

	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
	}

	return 0;
}