

#include "hash_tables.h"
/**
 * key_index - give the index of key
 * @key: key
 * @size: size of array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);

	return (index % size);
}
