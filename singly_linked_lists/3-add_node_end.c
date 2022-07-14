
#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node != NULL)
	{
		node->str = strdup(str);
		node->len = _strlen(str);
		node->next = *head;
		*head = node;
		return (*head);
	}

	return (NULL);
}

/**
 * _strlen - count length of string
 * @s: pointer to string
 * Return: count
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
		;

	return (i);
}