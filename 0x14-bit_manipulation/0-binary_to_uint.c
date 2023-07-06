#include "main.h"
/**
 * binary_to_unit - function that converts a binary number to an unsigned int.
 * @b: where b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars in the
 * that is not 0 or 1, b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans;
	int bin, len = 0;

	if (!b)
		return (0);
	ans = 0;
	while (b[len] != '\0')
		len++;
	for (len--, bin = 1; len >= 0; len--, bin *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			ans += bin;
	}
	return (ans);
}
