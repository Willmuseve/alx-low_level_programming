#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that prints all possible combinations
 *  of single-digit numbers.
 *  Return: 0
 */
int main(void)
{
	int will;

	for (will = 0; will < 10; will++)
	{
		putchar(will + '0');
		if (will < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
