#include "main.h"

/**
 * _isalpha - Checks alphabet characters
 * @c: the character will be checked
 * Return: 1 if the letter is lower or upper case, if not return 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
