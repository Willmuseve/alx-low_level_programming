#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints number from 0 to 9
 * Returns: returns numbers printed
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		_putchar (a + '0');
		a++;
	}
	_putchar ('\n')
}
