#include "lists.h"
/**
 * get_nodeint - returns the nth node of a list
 * @head: pointer to the first node
 * @index: nth node position
 * Return: nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 unsigned int i = 0;
	 listint_t *temp;

	if (head == NULL)
		return (NULL);
	 while (head != NULL && i <= index)
	{
		if (i == index && temp != NULL)
		{
			temp = head;
		}
		else
			return (NULL);
		i++;
		head = head->next;
	}
	return (temp);
}
