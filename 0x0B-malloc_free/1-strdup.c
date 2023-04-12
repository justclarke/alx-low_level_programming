#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *c;
	int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
		exit(1);
	}
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	c = (char *)malloc(sizeof(char) * (j + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		c[i]  = str[i];
	}
	return (c);
}
