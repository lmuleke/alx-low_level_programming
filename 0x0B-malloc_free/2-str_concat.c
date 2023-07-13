#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, li;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = li = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[li] != '\0')
		li++;
	concat = malloc((i + li + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	i = li = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[li] != '\0')
	{
		concat[i] = s2[li];
		i++, li++;
	}
	concat[i] = '\0';
	return (concat);
}
