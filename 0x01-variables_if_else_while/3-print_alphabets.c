#include <stdio.h>
#include <stdlib.h>
/**
 * main - does the main function
 * Description: prints the alphabet in lower case then in upper case
 * in a newline
 * Return: returns value most cases 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
