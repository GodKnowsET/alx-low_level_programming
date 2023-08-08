#include "main.h"
/**
 * _memset - Populate a memory block with a designated value
 * @s: Commencing address of the memory to be populated
 * @b: the wanted value
 * @n: number of bytes will be changed
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

