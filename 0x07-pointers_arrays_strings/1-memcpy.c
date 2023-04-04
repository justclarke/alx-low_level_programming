#include "main.h"
/**
* _memcpy - copies n bytes from memory area
* @dest: memory stored
* @src: memory copied
* @n: number of bytes to be copied
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
