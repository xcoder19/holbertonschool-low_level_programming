
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	unsigned long int i = 0;
	unsigned long int size = ht->size;
	if (ht == NULL)
		return;
	printf("{");
	while (i < size)
	{
		p = ht->array[i];
		if (ht->array[i] != NULL)
		{
			if (i + 1 == size)
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);

			else
				printf("'%s': '%s' ,", ht->array[i]->key, ht->array[i]->value);

			p = p->next;
		}

		i++;
	}
	printf("}");
}