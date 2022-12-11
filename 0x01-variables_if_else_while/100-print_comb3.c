#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all possible
 *  different combinations of two digits.
 *  Return: returns 0 value
 */
int main(void)
{
	int m;
	int w;

	for (m = 0; m <= 9; m++;)
	{
		for (w = m+1; w <= 9; w++)
		{
			putchar(m + '0');
			putchar(w + '0');
			if (m < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar("\n");
	return (0);
}
