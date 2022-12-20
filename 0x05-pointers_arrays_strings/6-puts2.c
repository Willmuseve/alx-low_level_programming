#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			putchar('\n');
			break;
		}
		if (c % 2 == 0)
			putchar(str[c]);
		c++;
	}
}