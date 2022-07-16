
#include "lists.h"
/**
 * add_node_end - add node to end of a linked list
 * @head: pointer to list_t pointer
 * @str: string
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tail;
	node = malloc(sizeof(list_t));
	if (node != NULL)
	{
		node->str = strdup(str);
		node->len = _strlen(str);
		node->next = NULL;
	}

	if (*head != NULL)
	{
		tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = node;
	}

	else
	{
		*head = node;
	}
	return (*head);
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
