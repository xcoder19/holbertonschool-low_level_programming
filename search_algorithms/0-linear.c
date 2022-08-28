
#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search
 * Return: index on sucess
 */
int linear_search(int *array, size_t size, int value)
{
	int *p;
	int i = 0;

	if (array == NULL)
		return (-1);

	p = array;
	while (size--)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (*p == value)
			return (i);

		p++;
		i++;
	}
	return (-1);
}
