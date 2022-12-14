#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: has value
 * Return: 0 + 1
 */
int print_sign(int n)
{
	int f;

	if (n > 0)
	{
		f = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		f = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (f);
}
