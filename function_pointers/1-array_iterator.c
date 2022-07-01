
#include "function_pointers.h"
/**
 * array_iterator - iterates over an array and passes each value into a function
 * @array: array of int
 * @size: size of array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;

	while (size)
	{
		(*action)(array[i]);
		i++;
		size--;
	}
}
