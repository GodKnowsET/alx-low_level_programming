#include <stdio.h>

/**
 * main - Prints numbers 0 to 9.
 *
 * Return: 0 eachtime (Success)
 */
int main(void)
{
	int zerotonine;

	for (zerotonine = 0; zerotonine < 10; zerotonine++)
	{
		putchar(zerotonine%10 + '0');
	}
	putchar('\n');
	return (0);
}
