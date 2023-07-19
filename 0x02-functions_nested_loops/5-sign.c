#include "main.h"

/**
 * print_sign -Prints signs of the numbers
 * @n: int that will be checked
 * Return: 1, if n is greater than 0 return +.
 * 0 and Prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
}
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
