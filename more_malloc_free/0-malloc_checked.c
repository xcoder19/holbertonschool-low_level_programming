#include "main.h"
/**
 * malloc_checked - allcoating memory
 * @b: number of bytes to allocate
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) != NULL)
	{
		return malloc(b);
	}
	else
	{
		exit(98);
	}
}
