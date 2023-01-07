#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: pointer to an array of characters
 * Return: always 0 (success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
