#include "main.h"
/**
 * _memset - this code fills memory with a constant byte.
 * @s: begining to address of memory to be filled
 * @b: wanted value
 * @n: number of bytes changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

