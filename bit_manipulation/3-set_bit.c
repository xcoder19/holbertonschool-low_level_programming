#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clearBit = ~(1 << index);
	unsigned long int mask = *n & clearBit;
	*n = (mask | (1 << index));
	return 1;
}
