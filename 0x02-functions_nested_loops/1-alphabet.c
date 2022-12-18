#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase, followed by a new line.
 * Code by Prince Solomon
*/

int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	putchar('\n');
}
