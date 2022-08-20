
#include "hash_tables.h"
/**
 * hash_table_print - print key value pairs
 * @ht: hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	unsigned long int i = 0;
	unsigned long int size;
	char *delim = "";

	if (ht == NULL)
		return;

	size = ht->size;
	printf("{");
	while (i < size)
	{
		p = ht->array[i];

		while (p != NULL)
		{
			printf("%s'%s': '%s'", delim, p->key, p->value);
			(void)(delim = ", "),
				p = p->next;
		}

		i++;
	}

	printf("}");
	printf("\n");
}
