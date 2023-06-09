#include "main.h"
#include <stdlib.h>
/**
* create_array - creates san array of chars and initializes it
* with a specific char
* @size: size of the array
* @c: character to initiialize the array
* Return: Null is size = 0, pointer to array if successful
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
