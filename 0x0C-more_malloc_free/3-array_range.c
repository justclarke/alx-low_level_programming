#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: minimum value (included)
* @max: maximum value (included)
* Return: array of integers
*/
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
