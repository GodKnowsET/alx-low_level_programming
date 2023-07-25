#include "main.h"
/**
 * _puts - this code prints a string, followed with a new line
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

