#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: the number to set
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1 << index;
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);
	if (n == NULL)
		return (-1);
	*n = ~i & *n;
	return (1);
}
