#include "main.h"

/**
 * print_square - prints a square foloowed by a new line
 * Return: 0 or output
 * @size: the size
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
