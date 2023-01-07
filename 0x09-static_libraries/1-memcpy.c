#include "main.h"
/**
 * _memcpy - function to copy memory
 * @dest: memory to copy to
 * @src: memory t0 copy from
 * @n: number of bytes to copy
 * Return: return pointer to dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *from = src;

	char *to = dest;

	unsigned int index;

	for (index = 0; index < n; index++)
	{
		to[index] = from[index];
	}
	return (dest);
}
