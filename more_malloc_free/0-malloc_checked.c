#include "main.h"
/**
 * malloc_checked - allcoating memory
 * @b: number of bytes to allocate
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (p != NULL)
	{
		return p;
	}
	else
	{
		exit(98);
	}
}
