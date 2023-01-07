#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s of any of
 * the bytes in the string accept.
 * @s: string to pick char
 * @accept: string to compare to
 * Return: string pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
