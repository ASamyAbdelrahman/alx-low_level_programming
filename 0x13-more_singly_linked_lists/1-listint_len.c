#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head of the list
 * Return: the number of the elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h; counter++)
	{
		h = h->next;
	}
	return (counter);
}
