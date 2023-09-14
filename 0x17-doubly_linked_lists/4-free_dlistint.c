#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	h = head;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while (h != NULL)
	{
		head = head->next;
		free(h);
	}
}
