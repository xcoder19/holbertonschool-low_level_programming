#include "main.h"

int *array_range(int min, int max)
{
	int i, *arr;
	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(max - min);

	if (arr != NULL)
	{
		i = 0;
		while (min++ && min <= max)
		{
			arr[i] = min;
			i++;
		}
	}
	return (NULL);
}
