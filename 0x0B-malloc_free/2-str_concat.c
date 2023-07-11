#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: the first string.
 * @s2: the second string.
 * Return: returns ptr or NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *ptr;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = (char *) malloc((len1 + len2) * sizeof(char) + 1);
	if (ptr != NULL)
	{
		for (i = 0; i < len1; i++)
			ptr[i] = s1[i];
		for (i = 0; i < len2; i++)
			ptr[len1 + i] = s2[i];
	}
	else
		return (NULL);
	ptr[len1 + len2 + 1] = '\0';
	return (ptr);
}
