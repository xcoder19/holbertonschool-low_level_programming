
#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: array of int
 * @size: size of array
 * @cmp: pointer to a function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	while (size)
	{
		if ((*cmp)(array[i]))
		{
			return i;
		}
		i++;
		size--;
	}
	return (-1);
}
