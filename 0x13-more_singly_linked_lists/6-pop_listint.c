#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: the head of the list.
 * Return: the head n value.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *ptr;
	int n;

	if (head == NULL)
		return (0);
	temp = ptr = *head;
	if (*head)
	{
		n = ptr->n;
		*head = ptr->next;
		free(temp);
	}
	else
		n = 0;
	return (n);
}
