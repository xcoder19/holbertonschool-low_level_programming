

#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *p = ht->array[index];

	if (ht == NULL || p == NULL)
		return NULL;

	while (p != NULL)
	{
		if (strcmp(p->key, key) == 0)
		{
			return p->value;
		}
		p = p->next;
	}
	return NULL;
}