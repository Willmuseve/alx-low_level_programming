#include "main.h"
/**
 * print_last_digit - prints last digit
 * @r: has value
 * Return: return 0
 */
int print_last_digit(int r)
{
	int last;

	if (r < 0)
	{
		last = (-1 * (r % 10));
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last  = (n % 10);
		_putchar(last + '0');
		return (last);
	}
}
