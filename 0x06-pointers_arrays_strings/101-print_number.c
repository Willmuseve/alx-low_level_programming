#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed
 * Return: 0
 */
void print_number(int n)
{
	int p;
	int m;
	int h;

	m = 0;
	p = 1;
	h = n;
	if (n < 0)
	{
		putchar('-');
		m = 1;
	}

	while (h > 9 || h < -9)
	{
		p *= 10;
		h /= 10;
	}

	while (p > 0)
	{
		if (p > 9)
		{
			if (!m)
				putchar((n / p % 10) + '0');
			else
				putchar((n / p % 10) * -1 + '0');
			p /= 10;
		}
		if (p == 1)
		{
			if (!m)
				putchar((n % 10) * -1 + '0');
			else
				putchar(n % 10 + '0');
			p = 0;
		}
	}
}
