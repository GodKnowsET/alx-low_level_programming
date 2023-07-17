#include <stdio.h>

/**
 * main - prints the alphabet in reverse,
 * with a new line
 * Return: 0 eachtime (Success)
 */
int main(void)
{
	char zeetoa;

	for (zeetoa = 'z'; zeetoa >= 'a'; zeetoa--)
	{
		putchar(zeetoa);
	}
	putchar('\n');
	return (0);
}
