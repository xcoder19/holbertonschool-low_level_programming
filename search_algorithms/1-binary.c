#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: array
 * @size: size
 * @value: value to search
 * Return: index of value in array
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = size - 1, mid = (start + end) / 2;

	if (array == NULL)
		return (-1);

	while (array[mid] != value && start <= end)
	{
		print_array(array, start, end);
		if (array[mid] > value)
			end = mid - 1;

		else
			start = mid + 1;

		mid = (start + end) / 2;
	}

	if (array[mid] == value)
	{
		print_array(array, start, end);
		return (mid);
	}
	return (-1);
}
/**
 * print_array - print array
 * @array: array
 * @start: start
 * @end: end
 */
void print_array(int *array, int start, int end)
{
	int i = start;
	printf("Searching in array: ");
	while (i <= end)
	{
		if (i == end)
			printf("%d", array[i]);

		else
			printf("%d, ", array[i]);

		i++;
	}
	printf("\n");
}
