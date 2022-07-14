#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{

	list_t *node = *head;
	node = malloc(sizeof(list_t));
	if (node != NULL)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = NULL;

		return (node);
	}
	return (NULL);
}
