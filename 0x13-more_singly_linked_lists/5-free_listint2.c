#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint2 - frees a linked list
 * @head: the beginning of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	if (head == NULL)
		return;
	ptr = *head;
	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}
