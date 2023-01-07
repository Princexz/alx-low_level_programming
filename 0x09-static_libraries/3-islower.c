#include "main.h"
/**
 * _islower - checksfor lowercase character
 * @c: the integer value it receives
 * Return: 1 if charcacter c is lowercase,
 * 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
