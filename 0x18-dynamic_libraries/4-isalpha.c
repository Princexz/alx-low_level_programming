#include "main.h"

/**
 * _isalpha - Check if a character is alphabet
 * @c: the character to be check
 * Prince Solomon
 * Return: 1 if charater is letter, lowercase or upper, o upper
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

