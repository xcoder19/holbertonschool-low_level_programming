#include "main.h"
/**
 * array_range - creates an array of ints
 * @min: min value
 * @max: max value
 * Return: array pointer
 */
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * 4);

	if (arr != NULL)
	{
		i = 0;
		while (min <= max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		return (arr);
	}
	return (NULL);
}
