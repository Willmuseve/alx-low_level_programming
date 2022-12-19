#include "main.h"
#include <stdio.h>
/**
 * more_numbers - a function that prints more numbers from 0 to 14
 * in a new line
 * Return: returns results
 */
void more_numbers(void)
{
	int a;
	int b;

	while (a < 10)
	{
		int b = 0;
		while (b < 14)
		{
			_putchar(b);
			b++;
		}
		putchar('\n');
		a++;
	}
}
