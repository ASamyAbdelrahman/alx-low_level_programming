#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the address of the node
 * @index: the index of the node
 * Return: the nth node of a node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	ptr = head;
	if (ptr)
	{
		for (counter = 0; counter < index; counter++)
		{
			ptr = ptr->next;
		}
	}
	else
		return (NULL);
	return (ptr);
}
