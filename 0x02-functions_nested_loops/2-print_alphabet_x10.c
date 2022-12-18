#include "main.h"

/**
 * print_alphabet - Prints 10 times the alphabet, in lowercases
 * Code by Prince Solomon
*/

void print_alphabet(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
