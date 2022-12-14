#include "main.h"
/**
 * main - print the alphabet in lowercase, followed by a new line.
 * Code by Prince Solomon
 */
int main(void)
{
       	print_alphabet();
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
}
