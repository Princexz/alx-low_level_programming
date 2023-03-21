#include <stdio.h>
#include "main.h"

/**
 * main - Enrty
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Bizz for multiple of 5,
 * and FizzBizz for multiple of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Bizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
