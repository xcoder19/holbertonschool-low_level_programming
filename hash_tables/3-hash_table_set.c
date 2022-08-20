

#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long pos = hash_djb2((unsigned char *)key);
	index = pos % ht->size;

	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	hash_node_t *p = ht->array[index];

	if (p != NULL && strcmp(p->key, key) == 0)
	{
		free(p->value);
		p->value = strdup(value);
		return (1);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}