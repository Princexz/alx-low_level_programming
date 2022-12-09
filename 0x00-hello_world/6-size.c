#include <stdio.h>
/**
 * main - C program that prints the size of various types
 * Code by Prince Solomon
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of a lolng lolng int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
