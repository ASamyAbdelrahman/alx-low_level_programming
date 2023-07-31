#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the head of the new element
 * @n: the value of the new element
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head, *ptr;

	new_head = malloc(sizeof(listint_t));
	ptr = *head;
	if (!new_head || !head)
		return (NULL);
	new_head->n = n;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_head;
	}
	else
		*head = new_head;
	return (new_head);
}

