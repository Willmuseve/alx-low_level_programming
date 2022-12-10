#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all the numbers of
 *  base 16 in lowercase, followed by a new line.
 *  Return: 0
 */
int main(void)
{
	char will = 'a';

	int nah;

	while (will <= 'f')
	{
		putchar(will);
		will++;
	}
	while (nah < 10)
	{
		putchar(nah + '0');
		nah++;
	}
	return (0);
}
