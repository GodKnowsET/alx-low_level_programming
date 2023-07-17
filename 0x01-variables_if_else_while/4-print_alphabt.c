#include <stdio.h>
/**
 * main - Prints lower case exept e&q
 *
 * Return: 0 each time
 */
int main()
{
	char letters;
	for(letters='a'; letters<='z'; letters++)
	{
	if(letters=='e' || letters=='q')
	continue;
	}
	{
		putchar(letters);
	}
	putchar('\n');
       return(0);	
}
