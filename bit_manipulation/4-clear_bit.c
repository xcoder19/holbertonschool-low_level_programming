int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clearBit = ~(0 << index);
	unsigned long int mask = *n & clearBit;
	*n = (mask | (0 << index));
	return (1);
}