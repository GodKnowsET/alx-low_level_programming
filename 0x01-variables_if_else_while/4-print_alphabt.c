#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints all the letters except q and e.
 *
 * Return: 0 eachtime (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
