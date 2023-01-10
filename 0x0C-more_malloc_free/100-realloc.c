#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call
 * to malloc i.e. malloc(old_size)
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size of the new memory block
 * Return: if new_size > old_size, added memory should not be initialised
 * if new_size == old_size, return ptr
 * if ptr is NULL call == malloc(new_size) for all values of old and new size
 * if new_size=0 && ptr != NULL, call = free(ptr) and Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));
	ptr1 = malloc(new_size);

	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}
	free(ptr);
	return (ptr1);
}
