#include "main.h"
/**
 * main - print the alphabet in lowercase, followed by a new line.
 * Code by Prince Solomon
 * Retuen: 0
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z', letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
