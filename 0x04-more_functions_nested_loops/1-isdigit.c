#include "main.h"

/**
 * _isdigit - check for a digit in the numbers from 0 - 9
 * @c: char will be checked
 *
 * Return: 0 or 1 for each
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
