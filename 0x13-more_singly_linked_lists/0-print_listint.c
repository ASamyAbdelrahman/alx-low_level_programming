#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the head of the list
 * Return: the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
