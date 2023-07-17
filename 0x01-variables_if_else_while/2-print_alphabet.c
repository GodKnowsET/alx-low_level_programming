#include <stdio.h>
/**
 * main - Prints the alphabet in lower case
 * Return: 0 each time
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;
	for (x =0; x < 26; x++)
	{
		putchar(alp[x]);
	}
	putchar ('\n');
	return (0);
	
}

