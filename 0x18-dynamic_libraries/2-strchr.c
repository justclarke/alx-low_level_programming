#include "main.h"
/**
* _strchr - locates a character in a string
* @s: string to search
* @c: character to be found
* Return: a pointer to the first occurence
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
