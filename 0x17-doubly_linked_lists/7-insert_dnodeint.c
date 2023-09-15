#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: the head of list
 * @idx: the required position
 * @n: the value of new element
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	head = *h;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	for (i = 0; head != NULL; i++)
	{
		if (i == idx - 1)
			break;
		head = head->next;
	}
	new->next = head->next;
	new->prev = head;
	head->next->prev = new;
	head->next = new;
	return (new);
}
