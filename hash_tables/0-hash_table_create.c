#include "hash_tables.h"
/**
 * hash_table_create -  creates a hash table.
 * @size: size of array
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	int i;
	array = malloc(sizeof(hash_node_t *) * size);
	table = malloc(sizeof(hash_table_t));

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
