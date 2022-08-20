

#include "hash_tables.h"
/**
 * hash_table_get -
 * @ht: hashtable
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *p;

	if (ht == NULL)
		return NULL;

	index = key_index((unsigned char *)key, ht->size);
	p = ht->array[index];

	if (p == NULL)
		return (NULL);

	while (p != NULL)
	{
		if (strcmp(p->key, key) == 0)
		{
			return p->value;
		}
		p = p->next;
	}
	return (NULL);
}