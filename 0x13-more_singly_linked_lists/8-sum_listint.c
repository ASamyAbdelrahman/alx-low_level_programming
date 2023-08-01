#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: the head of the list
 * Return: the sum of the list
 */
int sum_listint(listint_t *head)
{
	int counter, sum;

	if (head == NULL)
		return (0);
	sum = 0;
	for (counter = 0; head; counter++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
