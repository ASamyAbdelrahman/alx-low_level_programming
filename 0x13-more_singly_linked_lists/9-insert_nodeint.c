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
	unsigned int counter;
	listint_t *temp, *ptr;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	ptr = *head;
	temp->n = n;
	for (counter = 0; counter < idx; counter++)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return (temp);
}
