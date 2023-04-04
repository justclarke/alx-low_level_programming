#include "main.h"
/**
 * _memset - fills a specific value into the n byte of memory
 * @n: number of bytes 
 * @b: bytes to be filled 
 * @s: starting address of memory
 * Return: array with new value of the n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
