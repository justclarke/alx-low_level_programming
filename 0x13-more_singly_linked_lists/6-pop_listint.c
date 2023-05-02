#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to head
 * Return: n or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (i);
}
