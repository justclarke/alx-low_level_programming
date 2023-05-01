#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		new = current->next;
		free(current);
		current = new;
	}
	*head = NULL;
}
