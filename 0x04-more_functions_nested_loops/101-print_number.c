#include <stdio.h>
#include "main.h"

/**
 * print_number - prints int with putchar
 * @n: takes number, hello
 * Return: void
 */
void print_number(int n)
{
	int j;
	int p = 1;
	unsigned int m = n;
	unsigned int w = n;
	int e = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n + 1;
		n = -n;
		m = n;
		w = n;
		m += 1;
		w += 1;
	}
	while (m != 0)
	{
		m = m / 10;
		e++;
	}
	for (j = 1; j < e; j++)
	{
		p *= 10;
	}
	for (j = 0; j < e; j++)
	{
		_putchar(w = w % p + '0');
		w = w % p;
		p = p / 10;
	}
}
