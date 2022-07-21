#include "main.h"
/**
 * set_bit - set the value of a bit to 1
 * @n: pointer to int
 * @index: index
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clearBit = ~(1 << index);
	unsigned long int mask = *n & clearBit;
	*n = (mask | (1 << index));
	return (1);
}
