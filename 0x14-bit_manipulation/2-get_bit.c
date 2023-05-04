#include "main.h"
/**
 * get_bit - the value of a bit at a given index.
 * @n: the bit
 * @index: index is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index >= 8 * (sizeof(unsigned long int)))
		return (-1);
	i = 1 << index;
	if (i & n)
		return (1);
	else
		return (0);
}
