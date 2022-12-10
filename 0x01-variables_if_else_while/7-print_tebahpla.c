#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the lowercase alphabet
 * in reverse, followed by a new line
 * Return: 0
 */
int main(void)
{
	char w = 'z';

	while (w >= 'a')
	{
		putchar(w);
		w--;
	}
	putchar('\n');
	return  (0);
}
