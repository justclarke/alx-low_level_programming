#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%dn", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
