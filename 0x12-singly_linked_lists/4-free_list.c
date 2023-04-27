#include "lists.h"
/**
 * free_list - frees a list
 * @head: list to be made free
 */
void free_list(list_t *head)
{
	list_t *current, *new;
	current = head;
	while (current != NULL)
	{
		new = current->next;
		free(current->str);
		free(current);
		current = new;
	}
}
