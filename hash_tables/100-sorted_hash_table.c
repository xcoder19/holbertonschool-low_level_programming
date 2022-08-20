#include "main.h"
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	long unsigned int i;
	array = malloc(sizeof(shash_node_t *) * size);
	table = malloc(sizeof(shash_table_t));

	if (table == NULL || array == NULL)
		return (NULL);

	table->size = size;
	table->array = array;
	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}