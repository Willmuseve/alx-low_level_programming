#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all single digit numbers of base 10 starting
 * from 0, followed by a new line.
 * Return: 0 as always
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(11 + x);
		x++;
	}
	putchar('\n');
	return (0);
}
