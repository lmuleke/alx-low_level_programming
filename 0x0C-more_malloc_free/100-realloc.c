#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 * _realloc - reallocates a memory a memory block through malloc and free
 * @ptr: pointer to the memory block that it rellocate
 * @old_size: old size of the memory block
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_reallocc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return ptr;
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return NULL;

	unsigned int min_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return new_ptr;
}
