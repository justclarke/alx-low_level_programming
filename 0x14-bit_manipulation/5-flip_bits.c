#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first num
 * @m: second num
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;

	a = n ^ m;
	b = 0;
	while (a != 0)
	{
		b++;
		a = a & (a - 1);
	}
	return (b);
}
