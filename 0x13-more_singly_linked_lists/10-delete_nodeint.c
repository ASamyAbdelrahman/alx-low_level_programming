#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: emplacement of the node to delet
 * Return: pointr to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int counter = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	while (current)
	{
		if (counter == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
		counter++;
		previous = current;
		current = current->next;
	}
	return (-1);
}
