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
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
}
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	return 0;
}
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	return NULL;
}
void shash_table_print(const shash_table_t *ht)
{
}
void shash_table_print_rev(const shash_table_t *ht)
{
}
void shash_table_delete(shash_table_t *ht)
{
}
