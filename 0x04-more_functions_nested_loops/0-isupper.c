#include "main.h"

/**
 * _isupper - Checks if there are uppercase letters in the mix
 * @c: char will be checked
 *
 * Return: 0 or 1 for each
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
