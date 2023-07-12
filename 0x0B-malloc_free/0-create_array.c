#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of specified size and assign char
 *@size: size of array
 *@c: char to be assigned
 *Description: creates array of size int and assign char c
 *Return: NULL if the size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
