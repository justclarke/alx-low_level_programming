#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number to be set
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1 << index;
	if (n == NULL)
		return (-1);
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);

	*n = i | *n;
	return (1);
}
