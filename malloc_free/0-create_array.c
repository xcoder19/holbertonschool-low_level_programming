
#include "main.h"
/**
 * create_array - create array dynamicaly
 * @size: int
 * @c: character
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	if (!size)
	{
		return (NULL);
	}
	char *arr;

	unsigned int i;

	arr = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
