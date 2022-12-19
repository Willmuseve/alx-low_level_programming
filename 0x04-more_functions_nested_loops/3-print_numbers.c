#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * Returns: retur 0
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
	_putchar ('\n');
	return (0);
}
