#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	array = malloc(sizeof(hash_node_t *));
	table = malloc(sizeof(hash_table_t));

	if (table == NULL || array == NULL)
		return NULL;

	table->size = size;
	table->array = array;

	return table;
}