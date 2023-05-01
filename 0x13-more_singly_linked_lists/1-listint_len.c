#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
