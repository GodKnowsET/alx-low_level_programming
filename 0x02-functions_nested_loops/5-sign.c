#include "main.h"

/**
 * print_sign - Prints signs of the numbers
 * @n: The integer to be checked
 *
 * Return: 1, if n is greater than 0 and prints '+'
 *         0, if n is zero and prints '0'
 *        -1, if n is less than zero and prints '-'
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
