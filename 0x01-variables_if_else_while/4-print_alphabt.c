#include <stdio.h>
/**
 * main - print the alphabet in lowercase, except q and e.
 * Code By: Prince Solomon
 * Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
