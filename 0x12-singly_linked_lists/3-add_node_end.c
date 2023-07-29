#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head of the list
 * @str: the string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (!head || !temp)
		return (NULL);
	if (str)
	{
		temp->str = strdup(str);
		if (!temp->str)
		{
			free(temp);
			return (NULL);
		}
		temp->len = _strlen(temp->str);
	}
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
