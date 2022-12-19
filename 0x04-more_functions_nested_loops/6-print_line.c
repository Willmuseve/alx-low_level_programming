#include "main.h"

/**
 * print_line - draws a straight lin at the terminal
 * @n: number of times the character _ should be printed
 * Return: 0 or output
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
