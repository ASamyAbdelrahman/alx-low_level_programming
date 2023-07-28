#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the head of the list.
 * Return: the number of the nodes of the list
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
