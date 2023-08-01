#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head of the list
 * @idx: the index of the list where the new node should ne added
 * @n: the value of the node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int counter;

	new = malloc(sizeof(listint_t));
	counter = 0;
	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	while (current)
	{
		if (counter == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		counter++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
