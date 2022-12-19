#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - does just that
 * Return: returns 0 or the output
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if ((num == 50) || (num == 52))
		{
			continue;
		}
		_putchar(num);
	}
	_putchar(10);
}
