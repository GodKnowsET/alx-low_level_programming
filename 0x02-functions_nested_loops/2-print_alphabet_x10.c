#include "main.h"
/**
 * main - Prints 10x lower case alphabt
 *
 * Return: 0 eachtime
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
