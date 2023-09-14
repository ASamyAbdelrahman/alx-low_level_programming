#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of list
 * Return: the number of elements in a linked dlistint_list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elements;

	elements = 0;
	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
