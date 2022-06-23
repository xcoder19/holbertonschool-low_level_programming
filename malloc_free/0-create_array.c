
#include "main.h"
/**
 * create_array - create array dynamicaly
 * @size: int
 * @c: character
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	if (!size)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	if (arr)
	{
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
