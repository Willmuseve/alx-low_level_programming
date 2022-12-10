#include <stdio.h>
#include <stdlib.h>
/**
 * main - i think we all know what it does by now
 * Description: get a letter in lower case and print in a new line
 * Return: always returns 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

