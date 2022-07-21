/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to int
 * @index: index
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clearBit = ~(1 << index);
	unsigned long int mask = *n & clearBit;
	*n = (mask | (0 << index));
	return (1);
}
