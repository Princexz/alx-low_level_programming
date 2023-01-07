#include "main.h"
/**
 * _strcmp - Function which compare two strings
 * @s1: first string
 * @s2:second string
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, ret;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}

	ret = s1[i] - s2[i];
	return (ret);
}
