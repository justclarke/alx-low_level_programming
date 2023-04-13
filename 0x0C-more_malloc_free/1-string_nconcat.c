#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* @n: number of bytes from s2 to be added to s1 and in the pointer
* Return: pointer shall point to a newly allocated space in memory,
* which contains s1, followed by the first n bytes of s2, and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c, d;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	c = b;
	d = a;
	new_str = malloc((a + b + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	a = b = 0;
	while (a < d)
	{
		new_str[a] = s1[a];
		a++;
	}
	while (n < c && a < (d + n))
		new_str[a++] = s2[b++];
	while (n >= c && a < (c + d))
		new_str[a++] = s2[b++];
	new_str[a] = '\0';
	return (new_str);
}
