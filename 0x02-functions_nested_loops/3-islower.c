#include "main.h"
/**
 * _islower - Checks lower case character
 * @c: is the char that will be checked
 * Return: 1 if the char is lowercase, if not 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
