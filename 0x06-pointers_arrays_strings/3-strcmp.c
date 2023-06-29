#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
