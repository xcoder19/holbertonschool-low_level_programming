

#include "main.h"
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);

	if (arr != NULL)
	{

		return (memset(arr, 0, size * nmemb));
	}
	return (NULL);
}