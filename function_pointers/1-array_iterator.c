
#include "function_pointers.h"
/**
 * array_iterator - iterates over an array , passes it's values to a function
 * @array: array of int
 * @size: size of array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size)
	{
		(*action)(array[i]);
		i++;
		size--;
	}
}
