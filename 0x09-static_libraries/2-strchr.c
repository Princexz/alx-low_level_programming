#include "main.h"
/**
 * _strchr - function to search for occurrence of a character in a string
 * @s: string pointer
 * @c: character to search for
 * Return: pointer to character if characer was found, else return null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
