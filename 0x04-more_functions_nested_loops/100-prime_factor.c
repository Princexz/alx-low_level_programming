#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 * Prince Solomon
 * Return: always 0
 */

int main(void)
{
	unsigned long int i, n = 612852485143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
