#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: new node to be added
 * @str: head->stre
 *
 * Return: the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;
	char *new_str;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = new_str;
	while (new_str[i] != '\0')
		i++;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);

}
