
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	unsigned long int i = 0;
	unsigned long int size = ht->size;
	char *delim = "";
	if (ht == NULL)
		return;
	printf("{");
	while (i < size)
	{
		p = ht->array[i];

		while (p != NULL)
		{
			printf("%s'%s': '%s'", delim, ht->array[i]->key, ht->array[i]->value);
			(void)(delim = ", "),
				p = p->next;
		}

		i++;
	}

	printf("}");
	printf("\n");
}