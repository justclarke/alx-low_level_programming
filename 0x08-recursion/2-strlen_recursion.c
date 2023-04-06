#include "main.h"
/**
 * _strlen_recursion - finds the length of strings
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a = a + _strlen_recursion(s + 1);
	}
	return (a);
}
