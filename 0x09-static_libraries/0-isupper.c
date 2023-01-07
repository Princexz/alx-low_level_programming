#include "main.h"
/**
 * _isupper - checks whether a given input is an uppercase letter
 * @c: a parameter
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
