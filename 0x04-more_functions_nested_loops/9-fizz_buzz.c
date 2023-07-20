#include "main.h"
#include <stdio.h>

/**
 * main - This code outputs numbers from 1 to 100, each followed by a new line.
 * However, for multiples of three, it prints "Fizz" instead of the number,
 * and for multiples of five, it prints "Buzz."
 * Return: 0 eachtime (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
