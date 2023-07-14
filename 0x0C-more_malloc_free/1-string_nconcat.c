#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to append to
 * @s2: second string to concatenate from
 * @n: number of byte to concatenate from s2 to s1
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *l;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	l = malloc((len1 + n + 1) * sizeof(char));
	if (l == NULL)
		return NULL;
	for (i = 0; i < len1; i++)
		l[i] = s1[i];
	for (j = 0; j < n; j++)
		l[i + j] = s2[j];
	l[i + j] = '\0';
	return (l);
}
