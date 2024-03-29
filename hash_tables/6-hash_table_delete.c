
#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *p;
	unsigned long int i = 0;
	unsigned long int size;

	if (ht == NULL)
		return;

	size = ht->size;

	while (i < size)
	{
		p = ht->array[i];

		while (p != NULL)
		{
			free(p->key);
			free(p->value);
			free(p);
			p = p->next;
		}
		free(p);
		i++;
	}
	free(ht->array);
	free(ht);
}
